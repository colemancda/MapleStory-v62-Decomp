/* FUN_007401e1 - 0x007401e1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007401e1(void)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int extraout_ECX;
  int unaff_EBP;
  char *pcVar8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_00424e27();
  iVar3 = FUN_0042503d();
  *(uint *)(unaff_EBP + -0x20) = (uint)(iVar3 == -1);
  iVar6 = DAT_00978368;
  if (((iVar3 == -1) != 0) &&
     ((*(int *)(extraout_ECX + 0x68) == 0 || (*(int *)(extraout_ECX + 0x68) == 1)))) {
    iVar3 = FUN_00455c59(unaff_EBP + -0x28);
    iVar3 = *(int *)(iVar3 + 4);
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      FUN_0045e7c2(0);
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
    }
    uVar2 = FUN_0045f03e(iVar3 + 0x33,*(undefined4 *)(iVar3 + 0x35));
    uVar4 = FUN_0066ba5e(uVar2);
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((((0x57 < *(int *)(unaff_EBP + 8)) && (*(int *)(unaff_EBP + 8) < 0xab)) &&
        (0x22e < *(int *)(unaff_EBP + 0xc))) && (*(int *)(unaff_EBP + 0xc) < 0x23e)) {
      uVar4 = *(undefined4 *)(*(int *)(iVar6 + 0x326c) + *(int *)(iVar6 + 0x204c) * 4);
      if (*(int *)(iVar6 + 0x2050) == 0) {
        uVar7 = *(undefined4 *)(iVar6 + 0x203c);
        *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
        puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0x7bf);
        uVar4 = *puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_00434e21(unaff_EBP + -0x10,uVar4,uVar7,*(undefined4 *)(unaff_EBP + -0x20),iVar3 + 4);
        *(undefined1 *)(unaff_EBP + -4) = 0;
      }
      else {
        uVar7 = *(undefined4 *)(iVar6 + 0x203c);
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
        puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0x2b0);
        uVar4 = *puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00434e21(unaff_EBP + -0x10,uVar4,uVar7,*(undefined4 *)(unaff_EBP + -0x1c),iVar3 + 4);
        *(undefined1 *)(unaff_EBP + -4) = 0;
      }
      FUN_00414ebb();
    }
    if (((0x1b9 < *(int *)(unaff_EBP + 8)) && (*(int *)(unaff_EBP + 8) < 0x22c)) &&
       ((0x22f < *(int *)(unaff_EBP + 0xc) && (*(int *)(unaff_EBP + 0xc) < 0x23e)))) {
      iVar6 = FUN_00413367(iVar3 + 0xb1,*(undefined4 *)(iVar3 + 0xb9));
      if (iVar6 < 1) {
        uVar7 = FUN_00413367(iVar3 + 0x91,*(undefined4 *)(iVar3 + 0x99));
        puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0x78b);
        uVar4 = *puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00434e21(unaff_EBP + -0x10,uVar4,uVar7,*(undefined4 *)(unaff_EBP + -0x14));
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
      }
      else {
        uVar4 = FUN_00413367(iVar3 + 0xb1,*(undefined4 *)(iVar3 + 0xb9));
        uVar7 = FUN_00413367(iVar3 + 0x91,*(undefined4 *)(iVar3 + 0x99));
        FUN_00434e21(unaff_EBP + -0x10,s_EXP____d____d_GachaponEXP____d_0096b6a8,uVar7,
                     *(undefined4 *)(unaff_EBP + -0x14),uVar4);
      }
    }
    pcVar8 = *(char **)(unaff_EBP + -0x10);
    if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
      FUN_0074d6fb();
    }
    else {
      piVar1 = (int *)(*(int *)(unaff_EBP + -0x18) + 4);
      iVar6 = (**(code **)(*piVar1 + 0x30))(pcVar8);
      iVar6 = iVar6 + 0x14 + *(int *)(unaff_EBP + 0xc);
      iVar3 = (**(code **)(*piVar1 + 0x2c))(iVar6);
      FUN_0074d755(iVar3 + 0x14 + *(int *)(unaff_EBP + 8),iVar6,pcVar8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


