/* FUN_00797d5a - 0x00797d5a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00797d5a(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  uint uVar6;
  int unaff_EBP;
  undefined4 uStack_60;
  int iStack_5c;
  int *piStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  char *pcStack_40;
  int iStack_3c;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x524) == 0) {
    iStack_3c = 0x797d82;
    iVar1 = FUN_0043f79a();
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + 8) / 10000 == 0x1ad) {
        iStack_3c = *(undefined4 *)(unaff_EBP + 8);
        iStack_44 = unaff_EBP + -0x10;
        pcStack_40 = s_Item_Etc_0429_img__08d_effect__0096c070;
        uStack_48 = 0x797dbd;
        FUN_00434e21();
      }
      else {
        iStack_3c = 0xdbe;
        pcStack_40 = (char *)(unaff_EBP + -0x18);
        iStack_44 = 0x797dd5;
        puVar2 = (undefined4 *)FUN_00679d22();
        pcStack_40 = (char *)*puVar2;
        iStack_3c = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_44 = unaff_EBP + -0x10;
        uStack_48 = 0x797de8;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_3c = 0x797df7;
        FUN_00414ebb();
      }
      iStack_3c = 0xffffffff;
      pcStack_40 = &DAT_00978474;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      iStack_44 = 0x797e09;
      FUN_00414edd();
      iVar1 = *(int *)(extraout_ECX + 0x1dfc);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if ((iVar1 != 0) && (*(int *)(iVar1 + -4) != 0)) {
        uVar6 = 0;
        while( true ) {
          if ((*(int *)(extraout_ECX + 0x1dfc) == 0) ||
             (*(uint *)(*(int *)(extraout_ECX + 0x1dfc) + -4) <= uVar6)) goto LAB_00797ed0;
          iStack_3c = 0;
          pcStack_40 = (char *)0x797e46;
          iStack_3c = FUN_0043f90a();
          if ((iStack_3c == 0x18) || (iStack_3c == 0x1c)) {
            iStack_3c = 5;
          }
          else if (iStack_3c == 0x19) {
            iStack_3c = 6;
          }
          else if ((iStack_3c == 0x1a) || (iStack_3c == 0x1d)) {
            iStack_3c = 7;
          }
          else if (iStack_3c == 0x1e) {
            iStack_3c = 0x10;
          }
          if (iStack_3c == *(int *)(*(int *)(extraout_ECX + 0x1dfc) + uVar6 * 4)) break;
          uVar6 = uVar6 + 1;
        }
        pcStack_40 = (char *)(unaff_EBP + -0x18);
        iStack_44 = 0x797e8b;
        piVar3 = (int *)FUN_004833ff();
        puVar2 = (undefined4 *)*piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (puVar2 == (undefined4 *)0x0) {
          pcStack_40 = (char *)0x0;
        }
        else {
          pcStack_40 = (char *)*puVar2;
        }
        iStack_3c = 0xffffffff;
        iStack_44 = 0x797ea8;
        FUN_00454081();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          iStack_3c = 0x797eb8;
          FUN_004030b1();
        }
        pcStack_40 = *(char **)(unaff_EBP + -0x14);
        if (pcStack_40 == (char *)0x0) {
          iStack_3c = 0;
        }
        else {
          iStack_3c = *(undefined4 *)((int)pcStack_40 + -4);
        }
        iStack_44 = 0x797ed0;
        FUN_0045efbb();
      }
LAB_00797ed0:
      if ((*(char **)(unaff_EBP + -0x14) == (char *)0x0) || (**(char **)(unaff_EBP + -0x14) == '\0')
         ) {
        iStack_3c = 0x3b3;
        pcStack_40 = (char *)(unaff_EBP + -0x18);
        iStack_44 = 0x797eef;
        piVar3 = (int *)FUN_00679d22();
        pcStack_40 = (char *)*piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (pcStack_40 == (char *)0x0) {
          iStack_3c = 0;
        }
        else {
          iStack_3c = *(undefined4 *)((int)pcStack_40 + -4);
        }
        iStack_44 = 0x797f0a;
        FUN_0045efbb();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_3c = 0x797f16;
        FUN_00414ebb();
      }
      iStack_3c = 3;
      pcStack_40 = (char *)0x797f1f;
      iVar1 = FUN_0079b949();
      iStack_3c = 0;
      pcStack_40 = (char *)0x0;
      iStack_44 = 0xffffffff;
      uStack_48 = *(undefined4 *)(unaff_EBP + -0x10);
      uStack_4c = 0;
      uStack_50 = 0;
      (*DAT_0097b4c8)();
      FUN_0087a1b0();
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_50;
      piStack_58 = (int *)(iVar1 + 0xc);
      iStack_5c = 0x797f50;
      FUN_00424e27();
      iStack_5c = 0x797f57;
      iStack_5c = FUN_0043210d();
      uStack_60 = 0xffffffff;
      uVar4 = FUN_00449713(*(undefined4 *)(unaff_EBP + -0x18));
      uVar4 = FUN_00456ad5(uVar4);
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_60;
      FUN_004033a1(uVar4);
      iVar5 = FUN_0079be1e();
      if (iVar5 == 0) {
        piStack_58 = (int *)0x79807a;
        FUN_0079ba1a();
      }
      else {
        piStack_58 = (int *)0x797f93;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
        piStack_58 = (int *)(unaff_EBP + -0x38);
        iStack_5c = 0x797fa2;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          piStack_58 = (int *)0x797fae;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        piStack_58 = (int *)0x797fb8;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
        piStack_58 = (int *)(unaff_EBP + -0x28);
        iStack_5c = 0x797fc2;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          piStack_58 = (int *)0x797fce;
          FUN_00878dfb();
        }
        iVar5 = *(int *)(unaff_EBP + 8) / 1000;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if ((iVar5 == 0x1392) || (iVar5 == 0x10c2)) {
          *(undefined4 *)(unaff_EBP + 8) = 0x20;
        }
        else {
          *(undefined4 *)(unaff_EBP + 8) = 0;
        }
        if (*(int *)(iVar1 + 0x14) == 0) {
          piStack_58 = (int *)0x798008;
          FUN_00878dfb();
        }
        piVar3 = *(int **)(iVar1 + 0x14);
        uStack_60 = *(undefined4 *)(unaff_EBP + -0x38);
        iStack_5c = *(int *)(unaff_EBP + -0x34);
        piStack_58 = *(int **)(unaff_EBP + -0x30);
        iVar1 = (**(code **)(*piVar3 + 0x110))
                          (piVar3,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x28),
                           *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                           *(undefined4 *)(unaff_EBP + -0x1c));
        if (iVar1 < 0) {
          uStack_60 = 0x79803f;
          iStack_5c = iVar1;
          piStack_58 = piVar3;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        piStack_58 = (int *)0x79804c;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          piStack_58 = (int *)0x798057;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        piStack_58 = (int *)0x798064;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          piStack_58 = (int *)0x79806f;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
    }
    else {
      iStack_3c = 3;
      pcStack_40 = (char *)0x797d8f;
      FUN_0079ba1a();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


