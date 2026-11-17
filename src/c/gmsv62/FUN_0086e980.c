/* FUN_0086e980 - 0x0086e980 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0086e980(void)

{
  LPCSTR lpModuleName;
  HMODULE pHVar1;
  undefined4 uVar2;
  
  if (DAT_0097fc6c != '\0') {
    return 1;
  }
  lpModuleName = (LPCSTR)FUN_00875080(&DAT_0096e674);
  pHVar1 = GetModuleHandleA(lpModuleName);
  if (pHVar1 == (HMODULE)0x0) {
    return 0;
  }
  uVar2 = FUN_00875080(&DAT_0096e654);
  DAT_0097f908 = FUN_0086f770(pHVar1,uVar2);
  if (DAT_0097f908 == 0) {
    return 0;
  }
  uVar2 = FUN_00875080(&DAT_0096e640);
  DAT_0097f7f8 = FUN_0086f770(pHVar1,uVar2);
  if (DAT_0097f7f8 == 0) {
    return 0;
  }
  uVar2 = FUN_00875080(&DAT_0096e62c);
  DAT_0097fb20 = FUN_0086f770(pHVar1,uVar2);
  if (DAT_0097fb20 == 0) {
    return 0;
  }
  uVar2 = FUN_00875080(&DAT_0096e618);
  DAT_0097fb1c = FUN_0086f770(pHVar1,uVar2);
  if (DAT_0097fb1c == 0) {
    return 0;
  }
  uVar2 = FUN_00875080(&DAT_0096e604);
  DAT_0097f7fc = FUN_0086f770(pHVar1,uVar2);
  if (DAT_0097f7fc == 0) {
    return 0;
  }
  DAT_0097fc6c = 1;
  return 1;
}


