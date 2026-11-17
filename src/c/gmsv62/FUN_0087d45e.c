/* FUN_0087d45e - 0x0087d45e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0087d45e(undefined4 *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_00980708._2_2_) {
    if (local_24.wHour == (WORD)DAT_00980708) {
      if (local_24.wDay == DAT_00980704._2_2_) {
        if (local_24.wMonth == DAT_00980700._2_2_) {
          if (local_24.wYear == (WORD)DAT_00980700) goto LAB_0087d508;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_009806f8 = 0xffffffff;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_009806f8 = 1;
  }
  else {
    DAT_009806f8 = 0;
  }
  DAT_00980700._0_2_ = local_24.wYear;
  DAT_00980700._2_2_ = local_24.wMonth;
  DAT_00980704._0_2_ = local_24.wDayOfWeek;
  DAT_00980704._2_2_ = local_24.wDay;
  DAT_00980708._0_2_ = local_24.wHour;
  DAT_00980708._2_2_ = local_24.wMinute;
  DAT_0098070c._0_2_ = local_24.wSecond;
  DAT_0098070c._2_2_ = local_24.wMilliseconds;
LAB_0087d508:
  uVar2 = FUN_008843fb(local_14.wYear,local_14.wMonth,local_14.wDay,local_14.wHour,local_14.wMinute,
                       local_14.wSecond,DAT_009806f8);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = uVar2;
  }
  return;
}


