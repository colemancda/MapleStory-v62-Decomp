/* FUN_006f972c - 0x006f972c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Type propagation algorithm not settling */

void FUN_006f972c(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int aiStack_5c [5];
  int **ppiStack_48;
  undefined4 local_38 [5];
  undefined4 local_24 [5];
  undefined1 local_10 [4];
  int *local_c;
  byte local_5;
  
  if (*(int *)(DAT_00978368 + 0x2b40) == 0) {
    iVar1 = *(int *)(DAT_00978368 + 0x2c94);
    if (iVar1 != 1) {
      if ((iVar1 == 3) || (iVar1 == 2)) {
        ppiStack_48 = (int **)0x1;
        aiStack_5c[4] = 0x6f9792;
        FUN_006f9059();
        ppiStack_48 = (int **)0x6f979d;
        FUN_0085b06d();
      }
      ppiStack_48 = (int **)local_10;
      aiStack_5c[4] = 0x6f97ac;
      iVar1 = FUN_00455c59();
      iVar1 = *(int *)(iVar1 + 4);
      if (local_c != (int *)0x0) {
        ppiStack_48 = (int **)0x0;
        aiStack_5c[4] = 0x6f97bd;
        FUN_0045e7c2();
        local_c = (int *)0x0;
      }
      ppiStack_48 = *(int ***)(iVar1 + 0x35);
      aiStack_5c[4] = iVar1 + 0x33;
      aiStack_5c[3] = 0x6f97cc;
      local_5 = FUN_0045f03e();
      ppiStack_48 = (int **)0x6f97d9;
      FUN_0085cdb1();
      ppiStack_48 = &local_c;
      local_24[0] = 0;
      aiStack_5c[4] = 0x6f97eb;
      puVar2 = (undefined4 *)FUN_0045b90e();
      ppiStack_48 = (int **)*puVar2;
      aiStack_5c[4] = 0x6f97f2;
      local_24[1] = FUN_0087b620();
      ppiStack_48 = (int **)0x6f97fe;
      FUN_00414ebb();
      ppiStack_48 = &local_c;
      aiStack_5c[4] = 0x6f980d;
      puVar2 = (undefined4 *)FUN_0045b90e();
      ppiStack_48 = (int **)*puVar2;
      aiStack_5c[4] = 0x6f9814;
      local_24[2] = FUN_0087b620();
      ppiStack_48 = (int **)0x6f9820;
      FUN_00414ebb();
      ppiStack_48 = (int **)(uint)local_5;
      puVar2 = local_24;
      piVar3 = aiStack_5c;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        piVar3 = piVar3 + 1;
      }
      iVar1 = FUN_006f989b();
      if (iVar1 != 0) {
        ppiStack_48 = (int **)0x6f984d;
        FUN_0085cdbd();
        puVar2 = local_24;
        puVar4 = local_38;
        for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        puVar2 = local_38;
        puVar4 = (undefined4 *)(DAT_00978368 + 0x2c80);
        for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        *(undefined4 *)(DAT_00978368 + 0x2c94) = 1;
        ppiStack_48 = (int **)0x6f9885;
        FUN_0083c608();
        ppiStack_48 = (int **)local_24[2];
        aiStack_5c[4] = local_24[1];
        aiStack_5c[3] = 0x6f9896;
        FUN_0085af4c();
      }
    }
  }
  else {
    ppiStack_48 = (int **)0x0;
    aiStack_5c[4] = 0;
    aiStack_5c[3] = 0;
    aiStack_5c[2] = 0;
    local_c = aiStack_5c + 1;
    aiStack_5c[1] = DAT_00978368;
    aiStack_5c[0] = 0x14d;
    FUN_00679d22(aiStack_5c + 1);
    aiStack_5c[0] = 0x6f9768;
    FUN_007db3ad();
  }
  return;
}


