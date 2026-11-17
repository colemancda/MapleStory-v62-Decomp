/* FUN_006cc1d8 - 0x006cc1d8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006cc1d8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *extraout_ECX;
  int *piVar5;
  int unaff_EBP;
  uint uVar6;
  int *piStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  FUN_00879bb8();
  uVar6 = -(uint)(extraout_ECX[0x3a] != 0) & 5;
  iVar1 = 0;
  *(int **)(unaff_EBP + -0x24) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  piVar5 = extraout_ECX;
  if (uVar6 != 0xfffffffb) {
    piVar5 = extraout_ECX + 0x2c;
    do {
      if (*piVar5 == 999999999) {
        *(undefined4 *)(unaff_EBP + -0x20) = 1;
        goto LAB_006cc24c;
      }
      iVar1 = iVar1 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar1 < (int)(uVar6 + 5));
  }
  uStack_2c = 0;
  iStack_30 = 0;
  iStack_34 = 0;
  uStack_38 = 0;
  *(int ***)(unaff_EBP + -0x14) = &piStack_3c;
  piStack_3c = piVar5;
  FUN_00679d22(&piStack_3c,0xb44);
  iVar1 = FUN_007db3ad();
  if (iVar1 != 0) goto LAB_006cc3cc;
LAB_006cc24c:
  uStack_2c = 0x6cc251;
  iVar1 = FUN_00429303();
  if (iVar1 == 0) goto LAB_006cc3cc;
  uStack_2c = 0x6cc264;
  uVar2 = FUN_004f162d();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (uVar6 != 0xfffffffb) {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x24) + 0xb0;
    do {
      if (*(int *)(unaff_EBP + -0x10) == **(int **)(unaff_EBP + -0x18)) {
        uStack_2c = 0;
        iStack_30 = 0;
        iStack_34 = 0;
        uStack_38 = 0;
        *(int ***)(unaff_EBP + -0x28) = &piStack_3c;
        piStack_3c = *(int **)(unaff_EBP + -0x18);
        FUN_00679d22(&piStack_3c,0xb45);
        iVar1 = FUN_007db3ad();
        if (iVar1 != 0) goto LAB_006cc3cc;
      }
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
    } while (*(int *)(unaff_EBP + -0x1c) < (int)(uVar6 + 5));
  }
  piVar5 = (int *)&DAT_05f5e100;
  if (*(uint *)(unaff_EBP + -0x10) / 100000000 == 0) {
LAB_006cc2de:
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  else {
    piVar5 = (int *)0x64;
    if ((int)(((ulonglong)*(uint *)(unaff_EBP + -0x10) / 1000000) % 100) == 9) goto LAB_006cc2de;
  }
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    uStack_2c = 0;
    iStack_30 = 0;
    iStack_34 = 0;
    uStack_38 = 0;
    *(int ***)(unaff_EBP + -0x28) = &piStack_3c;
    piStack_3c = piVar5;
    FUN_00679d22(&piStack_3c,0xb43);
    iVar1 = FUN_007db3ad();
    if (iVar1 != 0) goto LAB_006cc3cc;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  uStack_2c = 0x6c7;
  iStack_30 = unaff_EBP + -0x18;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_34 = 0x6cc323;
  puVar3 = (undefined4 *)FUN_00679d22();
  uStack_2c = *puVar3;
  iStack_30 = *(undefined4 *)(unaff_EBP + -0x10);
  iStack_34 = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_38 = 0x6cc33b;
  puVar3 = (undefined4 *)FUN_00550c58();
  uStack_2c = 0xb48;
  iStack_30 = unaff_EBP + -0x20;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_34 = 0x6cc351;
  puVar4 = (undefined4 *)FUN_00679d22();
  uStack_2c = *puVar3;
  iStack_30 = *puVar4;
  iStack_34 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_38 = 0x6cc363;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_2c = 0x6cc372;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_2c = 0x6cc37e;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_2c = 0x6cc389;
  FUN_00414ebb();
  uStack_2c = 0;
  iStack_30 = 0;
  iStack_34 = 0;
  uStack_38 = 0;
  *(int ***)(unaff_EBP + -0x28) = &piStack_3c;
  FUN_00450368(unaff_EBP + -0x14);
  iVar1 = FUN_007db791();
  if (iVar1 == 6) {
    uStack_2c = *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0xe8);
    iStack_30 = 0;
    iStack_34 = 1;
    uStack_38 = 0x6cc3c0;
    FUN_0084ae96();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_2c = 0x6cc3cc;
  FUN_00414ebb();
LAB_006cc3cc:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


