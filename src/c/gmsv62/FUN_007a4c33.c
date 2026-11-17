/* FUN_007a4c33 - 0x007a4c33 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007a4c33(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_10 [4];
  int local_c;
  undefined4 local_8;
  
  iVar2 = DAT_00978368;
  iVar3 = FUN_00455c59(local_10);
  uVar1 = *(undefined4 *)(iVar3 + 4);
  local_8 = uVar1;
  if (local_c != 0) {
    FUN_0045e7c2(0);
  }
  FUN_004b857d(uVar1,iVar2 + 0x2d14,iVar2 + 0x2e9c);
  iVar3 = 0;
  FUN_0043f1a0(0);
  FUN_007a4dec();
  do {
    if (*(int *)(*(int *)(param_1 + 0x1744) + 4 + iVar3) == 0) break;
    FUN_006151c2();
    iVar3 = iVar3 + 8;
  } while (iVar3 < 0x18);
  if (DAT_0097bd60 != 0) {
    FUN_006d3567(param_1 + 0x7c);
  }
  if (DAT_00979178 != 0) {
    iVar3 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))(&DAT_00979468);
    if ((-(uint)(iVar3 != 0) & DAT_00979178) != 0) {
      FUN_005c11a8(param_1 + 0x7c);
    }
  }
  FUN_007afb90(local_8);
  FUN_007afe99();
  FUN_007afd71(local_8,*(undefined4 *)(iVar2 + 0x2b3c));
  FUN_007affe0();
  FUN_007b012c();
  return;
}


