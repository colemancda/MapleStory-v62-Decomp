/* FUN_0086efb0 - 0x0086efb0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_0086efb0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_0097fb5c != '\0') {
    return true;
  }
  if (DAT_0097fc98 == '\0') {
    return (bool)2;
  }
  iVar2 = 0;
  if (DAT_0097fc88 != QueryPerformanceCounter_exref) {
    if (DAT_0097fc64 != 0) {
      uVar1 = FUN_00875080(&DAT_0096e8c4,QueryPerformanceCounter_exref);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar1);
    }
    iVar2 = 1;
  }
  if (DAT_0097fc84 != GetTickCount_exref) {
    if (DAT_0097fc64 != 0) {
      uVar1 = FUN_00875080(&DAT_0096e8b0,GetTickCount_exref);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar1);
    }
    iVar2 = iVar2 + 1;
  }
  if (DAT_0097fc8c != timeGetTime_exref) {
    if (DAT_0097fc64 != 0) {
      uVar1 = FUN_00875080(&DAT_0096e89c,timeGetTime_exref);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar1);
    }
    iVar2 = iVar2 + 1;
  }
  return iVar2 == 0;
}


