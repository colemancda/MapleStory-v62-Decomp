/* FUN_0071ad07 - 0x0071ad07 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0071ad07(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *extraout_ECX;
  int extraout_ECX_00;
  uint uVar8;
  int extraout_ECX_01;
  int unaff_EBP;
  int iStack_38;
  uint uStack_34;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iVar5 = DAT_00978368;
  iVar3 = *(int *)(unaff_EBP + 0xc);
  if (iVar3 < 0xb0) {
    if (0x9a < iVar3) {
      iVar5 = *(int *)(unaff_EBP + 8);
      if ((iVar5 < 0x97) || (0xb3 < iVar5)) {
        if ((iVar5 < 0xce) || (0xea < iVar5)) {
          if ((iVar5 < 0x102) || (0x11e < iVar5)) {
            FUN_0074d6fb();
            goto LAB_0071b368;
          }
          uStack_34 = unaff_EBP + 8;
          iStack_38 = 0x71ae13;
          FUN_00679d22();
          iVar2 = *extraout_ECX;
          *(undefined4 *)(unaff_EBP + -4) = 2;
          uStack_34 = 0x71ae23;
          iVar2 = (**(code **)(iVar2 + 0x30))();
          uStack_34 = iVar2 + 0x14 + iVar3;
          iStack_38 = 0x71ae2f;
          iVar3 = (**(code **)(*extraout_ECX + 0x2c))();
          iStack_38 = iVar3 + 0x14 + iVar5;
          FUN_0074d755();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        else {
          uStack_34 = unaff_EBP + 8;
          iStack_38 = 0x71adbb;
          FUN_00679d22();
          iVar2 = *extraout_ECX;
          *(undefined4 *)(unaff_EBP + -4) = 1;
          uStack_34 = 0x71adcb;
          iVar2 = (**(code **)(iVar2 + 0x30))();
          uStack_34 = iVar2 + 0x14 + iVar3;
          iStack_38 = 0x71add7;
          iVar3 = (**(code **)(*extraout_ECX + 0x2c))();
          iStack_38 = iVar3 + 0x14 + iVar5;
          FUN_0074d755();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
      }
      else {
        uStack_34 = unaff_EBP + 8;
        iStack_38 = 0x71ad5e;
        FUN_00679d22();
        iVar2 = *extraout_ECX;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        uStack_34 = 0x71ad6b;
        iVar2 = (**(code **)(iVar2 + 0x30))();
        uStack_34 = iVar2 + 0x14 + iVar3;
        iStack_38 = 0x71ad77;
        iVar3 = (**(code **)(*extraout_ECX + 0x2c))();
        iStack_38 = iVar3 + 0x14 + iVar5;
        FUN_0074d755();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      FUN_00414ebb();
      goto LAB_0071b368;
    }
LAB_0071b36c:
    uVar7 = 0;
  }
  else {
    uVar4 = (iVar3 + -0xae) / 0x16;
    if ((((int)uVar4 < 0) || (extraout_ECX[0x38] == 0)) ||
       (*(uint *)(extraout_ECX[0x38] + -4) <= uVar4)) goto LAB_0071b36c;
    iVar2 = *(int *)(unaff_EBP + 8);
    if ((0x12f < iVar2) && (iVar2 < 0x16a)) {
      if (extraout_ECX[0x175] / 1000000 == 1) {
        uVar7 = *(undefined4 *)(*(int *)(extraout_ECX[0x38] + 4 + uVar4 * 8) + 0x28);
        uStack_34 = 0;
        iStack_38 = 0;
        iVar5 = (**(code **)(*extraout_ECX + 0x30))(uVar7);
        iVar3 = iVar5 + 0x14 + iVar3;
        iVar5 = (**(code **)(*extraout_ECX + 0x2c))(iVar3);
        FUN_00759767(iVar5 + 0x14 + *(int *)(unaff_EBP + 8),iVar3,uVar7);
      }
      else {
        uStack_34 = unaff_EBP + -0x24;
        iStack_38 = 0x71af07;
        FUN_00554ef3();
        *(undefined4 *)(unaff_EBP + -4) = 3;
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          uStack_34 = 0;
          iStack_38 = 0;
          uVar7 = *(undefined4 *)(unaff_EBP + -0x20);
          iVar5 = (**(code **)(*extraout_ECX + 0x30))(uVar7);
          iVar3 = iVar5 + 0x14 + iVar3;
          iVar5 = (**(code **)(*extraout_ECX + 0x2c))(iVar3);
          FUN_00759767(iVar5 + 0x14 + *(int *)(unaff_EBP + 8),iVar3,uVar7);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          uStack_34 = 0x71af57;
          FUN_00449913();
        }
      }
LAB_0071b368:
      uVar7 = 0;
      goto LAB_0071b37b;
    }
    if ((iVar2 < 0x172) || (0x1a8 < iVar2)) {
      if (iVar2 < 0x15) {
        if (iVar2 < 0x57) goto LAB_0071b076;
LAB_0071b1fb:
        if (0x89 < iVar2) goto LAB_0071b076;
        uStack_34 = *(undefined4 *)(*(int *)(uVar4 * 8 + 4 + extraout_ECX[0x38]) + 0x1c);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        iStack_38 = 0x71b227;
        FUN_00470891();
        *(undefined4 *)(unaff_EBP + -4) = 0xe;
        uStack_34 = 0x71b238;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
        uStack_34 = unaff_EBP + -0x2c;
        iStack_38 = 0x71b246;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          uStack_34 = 0x71b252;
          FUN_00878dfb();
        }
        uStack_34 = 0x3c;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iStack_38 = 0x71b264;
        uVar7 = FUN_00411641();
        *(int **)(unaff_EBP + 0xc) = &iStack_38;
        iStack_38 = extraout_ECX_01;
        FUN_004033a1(uVar7);
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        FUN_007d4a9a(unaff_EBP + -0x1c,1);
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        FUN_0044974c();
        uVar4 = FUN_0047077a();
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(*(int *)(unaff_EBP + -0x14) + -4) >> 1;
        }
        *(bool *)(unaff_EBP + 0xf) = uVar4 != uVar8;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
          uStack_34 = 0x71b2ba;
          (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        uStack_34 = 0x71b2c7;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          uStack_34 = 0x71b2d2;
          FUN_00878dfb();
        }
        if (*(char *)(unaff_EBP + 0xf) == '\0') {
          FUN_0074d6fb();
        }
        else {
          uStack_34 = unaff_EBP + -0x1c;
          iStack_38 = 0x71b2f5;
          puVar6 = (undefined4 *)FUN_00679d22();
          uStack_34 = *puVar6;
          *(undefined4 *)(unaff_EBP + 0xc) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          iStack_38 = unaff_EBP + 0xc;
          FUN_00434e21();
          uStack_34 = 0x71b318;
          iVar5 = (**(code **)(*extraout_ECX + 0x30))();
          uStack_34 = iVar5 + 0x14 + iVar3;
          iStack_38 = 0x71b324;
          iVar3 = (**(code **)(*extraout_ECX + 0x2c))();
          iStack_38 = iVar3 + 0x14 + *(int *)(unaff_EBP + 8);
          FUN_0074d755();
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          FUN_00414ebb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      else {
        if (0x57 < iVar2) goto LAB_0071b1fb;
        uStack_34 = *(undefined4 *)(*(int *)(uVar4 * 8 + 4 + extraout_ECX[0x38]) + 0x18);
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        iStack_38 = 0x71b0b1;
        FUN_00470891();
        *(undefined4 *)(unaff_EBP + -4) = 7;
        uStack_34 = 0x71b0c2;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
        uStack_34 = unaff_EBP + -0x2c;
        iStack_38 = 0x71b0d0;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          uStack_34 = 0x71b0dc;
          FUN_00878dfb();
        }
        uStack_34 = 0x3c;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iStack_38 = 0x71b0ee;
        uVar7 = FUN_00411641();
        *(int **)(unaff_EBP + 0xc) = &iStack_38;
        iStack_38 = extraout_ECX_00;
        FUN_004033a1(uVar7);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_007d4a9a(unaff_EBP + -0x1c,1);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_0044974c();
        uVar4 = FUN_0047077a();
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(*(int *)(unaff_EBP + -0x10) + -4) >> 1;
        }
        *(bool *)(unaff_EBP + 0xf) = uVar4 != uVar8;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
          uStack_34 = 0x71b144;
          (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        uStack_34 = 0x71b151;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          uStack_34 = 0x71b15c;
          FUN_00878dfb();
        }
        if (*(char *)(unaff_EBP + 0xf) == '\0') {
          FUN_0074d6fb();
        }
        else {
          uStack_34 = unaff_EBP + -0x1c;
          iStack_38 = 0x71b17f;
          puVar6 = (undefined4 *)FUN_00679d22();
          uStack_34 = *puVar6;
          *(undefined4 *)(unaff_EBP + 0xc) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_38 = unaff_EBP + 0xc;
          FUN_00434e21();
          uStack_34 = 0x71b1a2;
          iVar5 = (**(code **)(*extraout_ECX + 0x30))();
          uStack_34 = iVar5 + 0x14 + iVar3;
          iStack_38 = 0x71b1ae;
          iVar3 = (**(code **)(*extraout_ECX + 0x2c))();
          iStack_38 = iVar3 + 0x14 + *(int *)(unaff_EBP + 8);
          FUN_0074d755();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_00414ebb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      FUN_00402676();
      goto LAB_0071b368;
    }
    uVar7 = *(undefined4 *)(extraout_ECX[0x38] + uVar4 * 8 + 4);
    *(int *)(unaff_EBP + -0x10) = DAT_00978368;
    *(undefined4 *)(unaff_EBP + -0x20) = uVar7;
    FUN_0071ba82();
    iVar2 = *(int *)(unaff_EBP + -0x20);
    cVar1 = *(char *)(iVar2 + 0x20);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    if ((-1 < cVar1) && ((int)cVar1 != *(int *)(iVar5 + 0x204c))) {
      *(int *)(unaff_EBP + -0x14) = iVar2;
      uStack_34 = unaff_EBP + -0x1c;
      iStack_38 = 0x71afd0;
      puVar6 = (undefined4 *)FUN_00679d22();
      uVar7 = *puVar6;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      *(undefined4 *)(unaff_EBP + -0x18) = uVar7;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      uStack_34 = 0x71afea;
      FUN_004ec897();
      uStack_34 = *(uint *)(iVar2 + 0x14) % 100;
      iStack_38 = *(int *)(unaff_EBP + -0x18);
      FUN_00434e21(unaff_EBP + 0xc);
      uStack_34 = 0x71b010;
      iVar5 = (**(code **)(*extraout_ECX + 0x30))();
      uStack_34 = iVar5 + 0x14 + iVar3;
      iStack_38 = 0x71b01c;
      iVar3 = (**(code **)(*extraout_ECX + 0x2c))();
      iStack_38 = iVar3 + 0x14 + *(int *)(unaff_EBP + 8);
      FUN_0074d755();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        uStack_34 = 0x71b05f;
        FUN_0071bbfc();
      }
      goto LAB_0071b368;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (iVar2 != 0) {
      uStack_34 = 0x71b076;
      FUN_0071bbfc();
    }
LAB_0071b076:
    uVar7 = 1;
  }
  FUN_0074d6fb();
LAB_0071b37b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar7;
}


