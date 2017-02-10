#include "Float32.h"
#include "Commands.h"
#include "PTrace.h"
#include <malloc.h>
#include "PrtUser.h"
#include "PrtWinUserConfig.h"
#include "POrbMavlink.h"

extern "C"
{
	const char* FormatMessageBuffer(const char* format, ...)
	{
		char* buffer = (char*)malloc(5000);
		if (buffer == NULL) {
			EventTrace(PProgram, 0, "Out of memory");
			PrtAssert(PRT_FALSE, "Out of memory");
		}
		va_list args;
		va_start(args, format);
		vsprintf_s(buffer, 5000, format, args);
		va_end(args);
		return buffer;
	}

	void P_DTOR_CommanderMachine_IMPL(PRT_MACHINEINST *context)
	{
	}

	void P_CTOR_CommanderMachine_IMPL(PRT_MACHINEINST *context, PRT_VALUE *value)
	{
	}

	PRT_VALUE *P_FUN_GetSystemTime_FOREIGN(PRT_MACHINEINST *context)
	{
		int ms = GetTickCount();
		return PrtMkIntValue(ms);
	}

	PRT_VALUE *P_FUN_CommanderMachine_SendCommandToPx4_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *caller, PRT_VALUE *confirm, PRT_VALUE *cmd, PRT_VALUE *a1, PRT_VALUE *a2, PRT_VALUE *a3, PRT_VALUE *a4, PRT_VALUE *a5, PRT_VALUE *a6, PRT_VALUE *a7)
	{
		int cmdId = 0;
		if (cmd->discriminator == PRT_VALUE_KIND_INT)
		{
			cmdId = PrtPrimGetInt(cmd);
		}

		bool doconfirm = false;
		if (confirm->discriminator == PRT_VALUE_KIND_BOOL)
		{
			doconfirm = (PrtPrimGetBool(confirm) == PRT_TRUE);
		}

		EventTrace(PProgram, 0, "Sending command: %d, with args (%f,%f,%f,%f,%f,%f,%f)\n", cmd, PrtGetFloat32(a1), PrtGetFloat32(a2), PrtGetFloat32(a3), PrtGetFloat32(a4), PrtGetFloat32(a5), PrtGetFloat32(a6), PrtGetFloat32(a7));

		POrbMavlink::SendCommand(cmdId, doconfirm, PrtGetFloat32(a1), PrtGetFloat32(a2), PrtGetFloat32(a3), PrtGetFloat32(a4), PrtGetFloat32(a5), PrtGetFloat32(a6), PrtGetFloat32(a7));

		return NULL;
	}

}
