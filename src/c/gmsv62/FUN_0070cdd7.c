/* FUN_0070cdd7 - 0x0070cdd7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_0070cdd7(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  short *psVar7;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  uint uVar8;
  int unaff_EBP;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined *puStack_44;
  int *piStack_40;
  
  FUN_00879bb8();
  piStack_40 = *(int **)(unaff_EBP + 8);
  for (uVar8 = 0;
      (iVar2 = *(int *)(extraout_ECX + 0x80), iVar2 != 0 && (uVar8 < *(uint *)(iVar2 + -4)));
      uVar8 = uVar8 + 1) {
    if (*(int **)(iVar2 + uVar8 * 4) == piStack_40) {
      iVar2 = *(int *)(extraout_ECX + 0x70);
      iVar3 = *(int *)(extraout_ECX + 0x6c);
      iVar4 = *(int *)(extraout_ECX + 0x84);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      uVar8 = (uint)(iVar4 < iVar2 * iVar3);
      puStack_44 = (undefined *)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      puStack_48 = (undefined1 *)0x70ce37;
      FUN_004497f5();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + 8) == 0) {
        *(undefined1 *)(unaff_EBP + -4) = 0;
        piVar6 = extraout_ECX_00;
      }
      else {
        puStack_48 = (undefined1 *)&piStack_40;
        *(int ***)(unaff_EBP + -0x1c) = &piStack_40;
        puStack_44 = (undefined *)0x10bf;
        uStack_4c = 0x70ce5a;
        FUN_00679e4e();
        puStack_44 = (undefined *)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        puStack_48 = (undefined1 *)0x70ce6a;
        FUN_0040263d();
        puStack_48 = (undefined1 *)0x70ce71;
        piStack_40 = (int *)FUN_004048a4();
        puStack_44 = (undefined *)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        puStack_48 = (undefined1 *)0x70ce7f;
        piStack_40 = (int *)FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        puStack_44 = (undefined *)0x70ce8e;
        FUN_00417232();
        piStack_40 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (piStack_40 != (int *)0x0) {
          puStack_44 = (undefined *)0x70ce9f;
          (**(code **)(*piStack_40 + 8))();
        }
        piStack_40 = (int *)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        puStack_44 = (undefined *)0x70ceac;
        piVar6 = (int *)FUN_00402bc3();
        if ((int)piVar6 < 0) {
          puStack_44 = (undefined *)0x70ceb7;
          piStack_40 = piVar6;
          FUN_00878dfb();
          piStack_40 = extraout_ECX_01;
        }
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          piStack_40 = (int *)0x70cec4;
          FUN_0087a1b0();
          puStack_48 = (undefined1 *)0x70cecd;
          puStack_44 = (undefined *)uVar8;
          piStack_40 = (int *)&stack0xffffffc4;
          puStack_44 = (undefined *)FUN_00412335();
          *(int ***)(unaff_EBP + -0x1c) = &piStack_40;
          puStack_48 = (undefined1 *)0x70ced9;
          FUN_004033a1();
          puStack_44 = (undefined *)(unaff_EBP + -0x3c);
          *(undefined1 *)(unaff_EBP + -4) = 6;
          puStack_48 = (undefined1 *)0x70cee9;
          FUN_0040263d();
          puStack_48 = (undefined1 *)0x70cef0;
          psVar7 = (short *)FUN_004048a4();
          sVar1 = *psVar7;
          *(undefined1 *)(unaff_EBP + -4) = 9;
          if (sVar1 == 8) {
            puStack_44 = *(undefined **)(psVar7 + 4);
          }
          else {
            puStack_44 = &DAT_0097812c;
          }
          piStack_40 = (int *)0xffffffff;
          puStack_48 = (undefined1 *)0x70cf0f;
          FUN_00454081();
          piStack_40 = (int *)(unaff_EBP + -0x3c);
          *(undefined1 *)(unaff_EBP + -4) = 6;
          puStack_44 = (undefined *)0x70cf1c;
          piVar6 = (int *)FUN_00402bc3();
          if ((int)piVar6 < 0) {
            puStack_44 = (undefined *)0x70cf27;
            piStack_40 = piVar6;
            FUN_00878dfb();
            piStack_40 = extraout_ECX_02;
          }
          piVar6 = *(int **)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (piVar6 != (int *)0x0) {
            puStack_44 = (undefined *)0x70cf38;
            piStack_40 = piVar6;
            (**(code **)(*piVar6 + 8))();
            piStack_40 = extraout_ECX_03;
          }
        }
        piVar5 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        piVar6 = piStack_40;
        if (piVar5 != (int *)0x0) {
          puStack_44 = (undefined *)0x70cf48;
          piStack_40 = piVar5;
          (**(code **)(*piVar5 + 8))();
          piVar6 = extraout_ECX_04;
        }
      }
      if (uVar8 == 0) {
        piStack_40 = (int *)0x0;
        puStack_44 = (undefined *)0x0;
        puStack_48 = (undefined1 *)0x0;
        uStack_4c = 0;
        *(int ***)(unaff_EBP + -0x1c) = &piStack_50;
        piStack_50 = piVar6;
        FUN_00450368(unaff_EBP + -0x10);
        FUN_007db3ad();
      }
      else {
        puStack_44 = (undefined *)(unaff_EBP + -0x10);
        piStack_40 = (int *)0xc;
        puStack_48 = (undefined1 *)0x70cf57;
        FUN_00471102();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_40 = (int *)0x70cf87;
      FUN_00414ebb();
      goto LAB_0070cfaf;
    }
  }
  piStack_40 = (int *)0x0;
  puStack_44 = (undefined *)0x0;
  puStack_48 = (undefined1 *)0x0;
  uStack_4c = 0;
  *(int ***)(unaff_EBP + -0x1c) = &piStack_50;
  FUN_00679d22(&piStack_50,0x10c6);
  FUN_007db3ad();
  uVar8 = 0;
LAB_0070cfaf:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar8;
}


