#ifndef _TIRF_LOCK_H_
#define _TIRF_LOCK_H_

#ifdef __cplusplus
	extern"C" {
#endif

#define TIRF_LOCK_API __declspec(dllimport)

TIRF_LOCK_API int MCL_InitHandle();
TIRF_LOCK_API int MCL_InitHandleOrGetExisting();
TIRF_LOCK_API int MCL_GetHandleBySerial(short serial);
TIRF_LOCK_API int MCL_GrabAllHandles();
TIRF_LOCK_API int MCL_GetAllHandles(int *handles, int size);
TIRF_LOCK_API int MCL_NumberOfCurrentHandles();
TIRF_LOCK_API void MCL_ReleaseHandle(int handle);
TIRF_LOCK_API void MCL_ReleaseAllHandles();

TIRF_LOCK_API void	MCL_DLLVersion(short *version, short *revision);

TIRF_LOCK_API int MCL_Read(int handle, int axis, double *readVal);

TIRF_LOCK_API int MCL_GetFirmwareVersion(int handle, short *version, short *profile);
TIRF_LOCK_API int MCL_GetSerialNumber(int handle);

#ifdef __cplusplus
	}
#endif

#endif