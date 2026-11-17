/* FUN_0086ed50 - 0x0086ed50 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 FUN_0086ed50(void)

{
  code *pcVar1;
  LPCSTR pCVar2;
  HMODULE pHVar3;
  HMODULE pHVar4;
  HMODULE pHVar5;
  undefined4 uVar6;
  int local_4;
  
  local_4 = 0;
  pCVar2 = (LPCSTR)FUN_00875080(&DAT_0096e888);
  pHVar3 = GetModuleHandleA(pCVar2);
  pCVar2 = (LPCSTR)FUN_00875080(&DAT_0096e878);
  pHVar4 = GetModuleHandleA(pCVar2);
  pCVar2 = (LPCSTR)FUN_00875080(&DAT_0096e864);
  pHVar5 = GetModuleHandleA(pCVar2);
  if (pHVar5 == (HMODULE)0x0) {
    return 2;
  }
  uVar6 = FUN_00875080(&DAT_0096e848);
  DAT_0097fc74 = (HMODULE)FUN_0086f770(pHVar5,uVar6);
  if (DAT_0097fc74 != (HMODULE)0x0) {
    DAT_0097fc88 = QueryPerformanceCounter_exref;
    if (DAT_0097fc64 != 0) {
      uVar6 = FUN_00875080(&DAT_0096e834,DAT_0097fc74,QueryPerformanceCounter_exref);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar6);
    }
    if (((DAT_0097fc74 < pHVar5) && (pHVar4 == (HMODULE)0x0)) &&
       ((pHVar3 == (HMODULE)0x0 || (DAT_0097fc74 < pHVar3)))) {
      if (DAT_0097fc64 != 0) {
        uVar6 = FUN_00875080(&DAT_0096e81c,pHVar5);
        FUN_0086cff0(DAT_0097fc64 + 0x24,uVar6);
      }
      local_4 = 1;
    }
  }
  uVar6 = FUN_00875080(&DAT_0096e808);
  DAT_0097fc70 = (HMODULE)FUN_0086f770(pHVar5,uVar6);
  if (DAT_0097fc70 != (HMODULE)0x0) {
    DAT_0097fc84 = GetTickCount_exref;
    if (DAT_0097fc64 != 0) {
      uVar6 = FUN_00875080(&DAT_0096e7f4,DAT_0097fc70,GetTickCount_exref);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar6);
    }
    if (((DAT_0097fc70 < pHVar5) && (pHVar4 == (HMODULE)0x0)) &&
       ((pHVar3 == (HMODULE)0x0 || (DAT_0097fc74 < pHVar3)))) {
      if (DAT_0097fc64 != 0) {
        uVar6 = FUN_00875080(&DAT_0096e7dc,pHVar5);
        FUN_0086cff0(DAT_0097fc64 + 0x24,uVar6);
      }
      local_4 = local_4 + 1;
    }
  }
  pcVar1 = timeGetTime_exref;
  timeGetTime();
  pCVar2 = (LPCSTR)FUN_00875080(&DAT_0096e7cc);
  pHVar5 = GetModuleHandleA(pCVar2);
  if (pHVar5 != (HMODULE)0x0) {
    uVar6 = FUN_00875080(&DAT_0096e7bc);
    DAT_0097fc78 = (HMODULE)FUN_0086f770(pHVar5,uVar6);
    if (DAT_0097fc78 != (HMODULE)0x0) {
      DAT_0097fc8c = pcVar1;
      if (DAT_0097fc64 != 0) {
        uVar6 = FUN_00875080(&DAT_0096e7a8,DAT_0097fc78,pcVar1);
        FUN_0086cff0(DAT_0097fc64 + 0x24,uVar6);
      }
      if (((DAT_0097fc78 < pHVar5) && (pHVar4 == (HMODULE)0x0)) &&
         ((pHVar3 == (HMODULE)0x0 || (DAT_0097fc74 < pHVar3)))) {
        if (DAT_0097fc64 != 0) {
          uVar6 = FUN_00875080(&DAT_0096e790,pHVar5);
          FUN_0086cff0(DAT_0097fc64 + 0x24,uVar6);
        }
        local_4 = local_4 + 1;
      }
    }
  }
  DAT_0097fc98 = 1;
  return local_4 == 0;
}


