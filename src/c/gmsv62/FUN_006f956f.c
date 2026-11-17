/* FUN_006f956f - 0x006f956f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Type propagation algorithm not settling */

void FUN_006f956f(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int aiStack_58 [5];
  int **ppiStack_44;
  undefined4 local_34 [5];
  undefined4 local_20 [4];
  undefined4 local_10;
  undefined1 local_c [4];
  int *local_8;
  
  if ((*(int *)(DAT_00978368 + 0x2b40) == 0) ||
     (*(int *)(DAT_00978368 + 0x2bf2) != *(int *)(DAT_00978368 + 0x2088))) {
    ppiStack_44 = (int **)0x0;
    aiStack_58[4] = 0;
    aiStack_58[3] = 0;
    aiStack_58[2] = 0;
    local_8 = aiStack_58 + 1;
    aiStack_58[1] = DAT_00978368;
    aiStack_58[0] = 0x152;
    FUN_00679d22(aiStack_58 + 1);
    aiStack_58[0] = 0x6f95b7;
    FUN_007db3ad();
  }
  else if (*(int *)(DAT_00978368 + 0x2c94) != 2) {
    if (*(int *)(DAT_00978368 + 0x2c94) == 1) {
      ppiStack_44 = (int **)0x0;
      aiStack_58[4] = 0x6f95dd;
      FUN_006f9059();
      ppiStack_44 = (int **)0x6f95e8;
      FUN_0085afad();
    }
    ppiStack_44 = (int **)local_c;
    aiStack_58[4] = 0x6f95f7;
    iVar1 = FUN_00455c59();
    iVar1 = *(int *)(iVar1 + 4);
    ppiStack_44 = (int **)0x6f9602;
    FUN_0045e4a2();
    ppiStack_44 = *(int ***)(iVar1 + 0x35);
    aiStack_58[4] = iVar1 + 0x33;
    aiStack_58[3] = 0x6f960e;
    uVar2 = FUN_0045f03e();
    ppiStack_44 = (int **)0x6f961b;
    FUN_0085cdb1();
    ppiStack_44 = &local_8;
    local_20[0] = 1;
    aiStack_58[4] = 0x6f962d;
    puVar3 = (undefined4 *)FUN_0045b90e();
    ppiStack_44 = (int **)*puVar3;
    aiStack_58[4] = 0x6f9634;
    local_20[1] = FUN_0087b620();
    if (local_8 != (int *)0x0) {
      ppiStack_44 = (int **)(local_8 + -3);
      aiStack_58[4] = 0x6f9648;
      FUN_00434e38();
    }
    ppiStack_44 = &local_8;
    aiStack_58[4] = 0x6f9658;
    puVar3 = (undefined4 *)FUN_0045b90e();
    ppiStack_44 = (int **)*puVar3;
    aiStack_58[4] = 0x6f965f;
    local_20[2] = FUN_0087b620();
    ppiStack_44 = (int **)0x6f966b;
    FUN_00414ebb();
    ppiStack_44 = &local_8;
    aiStack_58[4] = 0x6f967a;
    puVar3 = (undefined4 *)FUN_0045b90e();
    ppiStack_44 = (int **)*puVar3;
    aiStack_58[4] = 0x6f9681;
    local_20[3] = FUN_0087b620();
    ppiStack_44 = (int **)0x6f968d;
    FUN_00414ebb();
    ppiStack_44 = (int **)0x6f9694;
    local_10 = FUN_006f9c9d();
    puVar3 = local_20;
    piVar4 = aiStack_58;
    ppiStack_44 = (int **)(uVar2 & 0xff);
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    iVar1 = FUN_006f989b();
    if (iVar1 != 0) {
      ppiStack_44 = (int **)0x6f96c0;
      FUN_0085cdbd();
      puVar3 = local_20;
      puVar5 = local_34;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar3 = local_34;
      puVar5 = (undefined4 *)(DAT_00978368 + 0x2c80);
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined4 *)(DAT_00978368 + 0x2c94) = 2;
      ppiStack_44 = (int **)0x6f96f8;
      FUN_0083c608();
      puVar3 = (undefined4 *)(DAT_00978368 + 0x2c80);
      puVar5 = local_20;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      ppiStack_44 = (int **)local_10;
      aiStack_58[4] = local_20[3];
      aiStack_58[3] = local_20[2];
      aiStack_58[2] = local_20[1];
      aiStack_58[1] = 0x6f971e;
      FUN_0085aff6();
      ppiStack_44 = (int **)0x0;
      aiStack_58[4] = 0x6f9727;
      FUN_008161f1();
    }
  }
  return;
}


