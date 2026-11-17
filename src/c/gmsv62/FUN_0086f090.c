/* FUN_0086f090 - 0x0086f090 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 FUN_0086f090(void)

{
  LPCSTR lpModuleName;
  HMODULE pHVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  lpModuleName = (LPCSTR)FUN_00875080(&DAT_0096e958);
  pHVar1 = GetModuleHandleA(lpModuleName);
  if (pHVar1 == (HMODULE)0x0) {
    return 2;
  }
  uVar2 = FUN_00875080(&DAT_0096e94c);
  DAT_0097fc7c = (HMODULE)FUN_0086f770(pHVar1,uVar2);
  if (DAT_0097fc7c != (HMODULE)0x0) {
    DAT_0097fc90 = WSASend_exref;
    if (DAT_0097fc64 != 0) {
      uVar2 = FUN_00875080(&DAT_0096e934,DAT_0097fc7c,WSASend_exref);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar2);
    }
    if (DAT_0097fc7c < pHVar1) {
      if (DAT_0097fc64 != 0) {
        uVar2 = FUN_00875080(&DAT_0096e918,pHVar1);
        FUN_0086cff0(DAT_0097fc64 + 0x24,uVar2);
      }
      iVar3 = 1;
    }
  }
  uVar2 = FUN_00875080(&DAT_0096e90c);
  DAT_0097fc80 = (HMODULE)FUN_0086f770(pHVar1,uVar2);
  if (DAT_0097fc80 != (HMODULE)0x0) {
    DAT_0097fc94 = send_exref;
    if (DAT_0097fc64 != 0) {
      uVar2 = FUN_00875080(&DAT_0096e8f4,DAT_0097fc80,send_exref);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar2);
    }
    if (DAT_0097fc80 < pHVar1) {
      if (DAT_0097fc64 != 0) {
        uVar2 = FUN_00875080(&DAT_0096e8d8,pHVar1);
        FUN_0086cff0(DAT_0097fc64 + 0x24,uVar2);
      }
      iVar3 = iVar3 + 1;
    }
  }
  DAT_0097fc99 = 1;
  return iVar3 == 0;
}


