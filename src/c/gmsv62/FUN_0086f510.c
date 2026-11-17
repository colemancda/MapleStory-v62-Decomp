/* FUN_0086f510 - 0x0086f510 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_0086f510(undefined4 *param_1)

{
  LPCSTR lpModuleName;
  HMODULE pHVar1;
  undefined4 uVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  undefined1 local_40 [36];
  uint uStack_1c;
  
  lpModuleName = (LPCSTR)FUN_00875080(&DAT_0096ea68);
  pHVar1 = GetModuleHandleA(lpModuleName);
  uVar2 = FUN_00875080(&DAT_0096ea48);
  pcVar3 = (code *)FUN_0086f770(pHVar1,uVar2);
  uVar2 = FUN_00875080(&DAT_0096ea30);
  pcVar4 = (code *)FUN_0086f770(pHVar1,uVar2);
  iVar5 = 0;
  if (pcVar4 != (code *)0x0) {
    iVar5 = (*pcVar4)(*param_1,0x400000,local_40,0x40,0);
  }
  if (pcVar3 != (code *)0x0) {
    if (iVar5 != 0) goto LAB_0086f595;
    iVar5 = (*pcVar3)(param_1[2],0x400000,local_40,0x40,0);
  }
  if (iVar5 == 0) {
    return 0;
  }
LAB_0086f595:
  return ~uStack_1c;
}


