/* FUN_007522d5 - 0x007522d5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007522d5(void)

{
  byte bVar1;
  char cVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  int extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  int unaff_EBP;
  undefined4 uVar11;
  int iStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x30) = extraout_ECX;
  *(int *)(unaff_EBP + -0x3c) = extraout_ECX + 0x10;
  puStack_74 = (undefined1 *)0x7522f8;
  cVar2 = FUN_00433bfa();
  if (((cVar2 == '\0') && (*(int *)(extraout_ECX + 0x14) == *(int *)(unaff_EBP + 8))) &&
     (*(int *)(extraout_ECX + 0x18) == *(int *)(unaff_EBP + 0xc))) goto LAB_007529a6;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  puStack_74 = *(undefined1 **)(unaff_EBP + 0x14);
  puStack_78 = *(undefined1 **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_7c = 0x75232e;
  FUN_0075135d();
  if ((*(char **)(unaff_EBP + -0x1c) == (char *)0x0) || (**(char **)(unaff_EBP + -0x1c) == '\0')) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  *(uint *)(unaff_EBP + -0x10) = (-(uint)bVar1 & 0xfffffff0) + 0x10;
  if (*(int *)(unaff_EBP + 0x1c) != 0) {
    puStack_74 = (undefined1 *)0x75235f;
    sVar3 = _strlen(*(char **)(unaff_EBP + 0x1c));
    if (sVar3 != 0) {
      puStack_74 = (undefined1 *)(unaff_EBP + -0x34);
      puStack_78 = (undefined1 *)0x752374;
      puVar4 = (undefined4 *)FUN_00679d22();
      puStack_74 = (undefined1 *)*puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puStack_78 = (undefined1 *)(unaff_EBP + -0x24);
      iStack_7c = 0x752387;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x34) != 0) {
        puStack_74 = (undefined1 *)0x75239e;
        FUN_00434e38();
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x10;
    }
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = DAT_00973a94;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x10) + 0xc;
  FUN_0045e2eb();
  puStack_74 = (undefined1 *)(unaff_EBP + -0x14);
  puStack_78 = (undefined1 *)0x7523cd;
  FUN_0045a1d8();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    puStack_74 = (undefined1 *)(*(int *)(unaff_EBP + 0x10) + 0x59);
    puStack_78 = (undefined1 *)0x7523e8;
    iVar5 = (*DAT_0097b4ac)();
    if (iVar5 < 0) goto LAB_0075243f;
    puStack_74 = (undefined1 *)(unaff_EBP + -0x34);
    puStack_78 = (undefined1 *)0x7523fc;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_74 = (undefined1 *)0x752411;
    puStack_74 = (undefined1 *)FUN_0045e2eb();
    puStack_78 = (undefined1 *)(unaff_EBP + 0x14);
    iStack_7c = 0x75241d;
    FUN_00550bc4();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_74 = (undefined1 *)0x75242a;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 4;
  }
  else {
LAB_0075243f:
    FUN_0045e2eb();
    puStack_74 = (undefined1 *)(unaff_EBP + 0x14);
    puStack_78 = (undefined1 *)0x752459;
    FUN_0075572d();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_74 = (undefined1 *)0x752466;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 4;
  }
  FUN_00414ebb();
  if ((*(char **)(unaff_EBP + -0x14) != (char *)0x0) && (**(char **)(unaff_EBP + -0x14) != '\0')) {
    FUN_0045e2eb();
    puStack_74 = (undefined1 *)0x752493;
    iVar5 = FUN_0061aa2e();
    puStack_74 = (undefined1 *)(*(int *)(unaff_EBP + 0x10) + 0x28);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    puStack_78 = (undefined1 *)0x7524aa;
    FUN_00414edd();
    puStack_74 = DAT_00980dfc;
    puVar7 = *(undefined1 **)(iVar5 + 4);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = puStack_74;
    }
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      puStack_74 = *(undefined1 **)(unaff_EBP + -0x20);
    }
    puStack_78 = (undefined1 *)0x7524cc;
    iVar5 = FUN_008858f0();
    puStack_78 = puVar7;
    if (iVar5 != 0) {
      puStack_74 = (undefined1 *)(unaff_EBP + -0x38);
      puStack_78 = (undefined1 *)0x7524e3;
      FUN_004653c5();
      puStack_74 = (undefined1 *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_78 = (undefined1 *)0x7524f6;
      FUN_0045e02d();
      puStack_74 = (undefined1 *)(unaff_EBP + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_78 = (undefined1 *)0x75250a;
      FUN_004653c5();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      puStack_74 = (undefined1 *)0x752517;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_00414ebb();
      puStack_78 = extraout_ECX_00;
    }
    puStack_74 = (undefined1 *)0x0;
    *(undefined1 ***)(unaff_EBP + 0x14) = &puStack_78;
    iStack_7c = 7;
    FUN_00756efd(&puStack_78);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_7c = 0x752559;
    iStack_7c = FUN_00449713();
    iVar5 = FUN_00757d85(0x5c,0x10e,0);
    if (iVar5 < 0x45) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + -0x44;
    }
    if ((*(int *)(unaff_EBP + 0x20) == 0) ||
       (*(int *)(unaff_EBP + 0x20) == *(int *)(unaff_EBP + 0x24))) {
      iVar9 = 0;
    }
    else {
      iVar9 = 0x23;
    }
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    iVar10 = *(int *)(unaff_EBP + -0x10);
    puStack_74 = (undefined1 *)(iVar9 + iVar5 + 0x74 + iVar10);
    puStack_78 = (undefined1 *)0x122;
    iStack_7c = 6;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_0074d72a();
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    puStack_74 = (undefined1 *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_78 = (undefined1 *)0x7525be;
    FUN_00750398();
    puStack_74 = (undefined1 *)0x0;
    puStack_78 = (undefined1 *)0x1;
    iStack_7c = *(int *)(unaff_EBP + 0xc);
    FUN_0075699b(unaff_EBP + 0x14,*(undefined4 *)(unaff_EBP + 8));
    if (*(int **)(unaff_EBP + 0x14) != (int *)0x0) {
      puStack_74 = (undefined1 *)0x7525e0;
      (**(code **)(**(int **)(unaff_EBP + 0x14) + 8))();
    }
    puStack_78 = &stack0xffffff90;
    *(undefined1 **)(unaff_EBP + 0x14) = &stack0xffffff90;
    puStack_74 = (undefined1 *)0x1;
    iStack_7c = 0x7525f0;
    FUN_00756efd();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_74 = (undefined1 *)0x7525fc;
    puStack_74 = (undefined1 *)FUN_00449713();
    puStack_78 = (undefined1 *)0xa;
    iStack_7c = 0x752606;
    FUN_00758757();
    *(undefined4 *)(unaff_EBP + 0x14) = 0x1f;
    iVar5 = extraout_ECX;
    if ((*(char **)(unaff_EBP + -0x1c) != (char *)0x0) && (**(char **)(unaff_EBP + -0x1c) != '\0'))
    {
      puStack_74 = (undefined1 *)0xff;
      puStack_78 = (undefined1 *)0x75262f;
      FUN_004031b7();
      puStack_74 = (undefined1 *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      puStack_78 = (undefined1 *)0x75263e;
      FUN_004031b7();
      uVar8 = *(undefined4 *)(extraout_ECX + 0x4dc);
      iVar5 = **(int **)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      *(undefined4 *)(unaff_EBP + 0x14) = uVar8;
      if (iVar5 == 0) {
        puStack_74 = (undefined1 *)0x75265d;
        FUN_00878dfb();
      }
      puStack_74 = (undefined1 *)(unaff_EBP + 8);
      puStack_78 = (undefined1 *)0x75266c;
      piVar6 = (int *)FUN_00425067();
      iVar5 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      if (iVar5 == 0) {
        puStack_74 = (undefined1 *)0x75267c;
        FUN_00878dfb();
      }
      piVar6 = (int *)*piVar6;
      iVar5 = *piVar6;
      iStack_7c = *(int *)(unaff_EBP + -0x4c);
      puStack_78 = *(undefined1 **)(unaff_EBP + -0x48);
      puStack_74 = *(undefined1 **)(unaff_EBP + -0x44);
      *(int **)(unaff_EBP + 0xc) = piVar6;
      puVar7 = (undefined1 *)
               (**(code **)(iVar5 + 0x80))(piVar6,10,0x21,*(undefined4 *)(unaff_EBP + 0x14));
      if ((int)puVar7 < 0) {
        puStack_74 = *(undefined1 **)(unaff_EBP + 0xc);
        iStack_7c = 0x7526af;
        puStack_78 = puVar7;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        puStack_74 = (undefined1 *)0x7526c0;
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      puStack_74 = (undefined1 *)0x7526cd;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        puStack_74 = (undefined1 *)0x7526d8;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_74 = (undefined1 *)0x7526e5;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        puStack_74 = (undefined1 *)0x7526f0;
        FUN_00878dfb();
      }
      puStack_74 = (undefined1 *)0x7526fc;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
      puStack_74 = (undefined1 *)(unaff_EBP + -0x5c);
      puStack_78 = (undefined1 *)0x75270b;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        puStack_74 = (undefined1 *)0x752717;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      puStack_74 = (undefined1 *)0x752721;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      puStack_74 = (undefined1 *)(unaff_EBP + -0x4c);
      puStack_78 = (undefined1 *)0x75272b;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        puStack_74 = (undefined1 *)0x752737;
        FUN_00878dfb();
      }
      puStack_74 = (undefined1 *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puStack_78 = (undefined1 *)0x752746;
      FUN_004031b7();
      puStack_74 = (undefined1 *)(unaff_EBP + -0x4c);
      puStack_78 = (undefined1 *)0xe;
      iStack_7c = unaff_EBP + 8;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_00756efd();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      puStack_78 = (undefined1 *)0x75276d;
      puStack_78 = (undefined1 *)FUN_00449749();
      iStack_7c = 0x752776;
      uVar8 = FUN_00449713();
      *(int **)(unaff_EBP + 0x14) = &iStack_7c;
      iStack_7c = extraout_ECX_01;
      FUN_00448a17(uVar8);
      iVar5 = unaff_EBP + -0x6c;
      iVar9 = unaff_EBP + 0xc;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_00424e27(iVar9,iVar5);
      FUN_00425067(iVar9,iVar5);
      uVar11 = 0x1d;
      uVar8 = 0x10;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      FUN_004115d9(0x10,0x1d);
      FUN_00448e3a(uVar8,uVar11);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
        puStack_74 = (undefined1 *)0x7527c4;
        (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        puStack_74 = (undefined1 *)0x7527d5;
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puStack_74 = (undefined1 *)0x7527e2;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        puStack_74 = (undefined1 *)0x7527ed;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      puStack_74 = (undefined1 *)0x7527fa;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        puStack_74 = (undefined1 *)0x752805;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_74 = (undefined1 *)0x752812;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        puStack_74 = (undefined1 *)0x75281d;
        FUN_00878dfb();
      }
      iVar5 = *(int *)(unaff_EBP + -0x30);
      iVar10 = *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + 0x14) = 0x2f;
    }
    if ((*(char **)(unaff_EBP + -0x24) != (char *)0x0) && (**(char **)(unaff_EBP + -0x24) != '\0'))
    {
      puStack_78 = &stack0xffffff90;
      *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xffffff90;
      puStack_74 = (undefined1 *)0x7;
      iStack_7c = 0x752845;
      FUN_00756efd();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_74 = (undefined1 *)0x752851;
      puStack_74 = (undefined1 *)FUN_00449713();
      puStack_78 = *(undefined1 **)(unaff_EBP + 0x14);
      iStack_7c = 0x75285c;
      FUN_007585ac();
    }
    puStack_74 = (undefined1 *)(*(int *)(unaff_EBP + 0x10) + 0x59);
    puStack_78 = (undefined1 *)0x75286e;
    (*DAT_0097b4ac)();
    puStack_74 = (undefined1 *)0x0;
    puStack_78 = (undefined1 *)0x752886;
    puStack_78 = (undefined1 *)FUN_0045e2eb();
    iStack_7c = iVar10 + 0x20;
    FUN_00757a6e(10);
    puStack_74 = (undefined1 *)0x1;
    *(undefined1 ***)(unaff_EBP + 0x10) = &puStack_78;
    iStack_7c = 7;
    puStack_78 = extraout_ECX_02;
    FUN_00756efd(&puStack_78);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_7c = 0x7528b0;
    iStack_7c = FUN_00449713();
    iVar9 = FUN_00757d85(0x5c,0x10e,iVar10 + 0x20);
    if ((*(char **)(unaff_EBP + -0x2c) != (char *)0x0) && (**(char **)(unaff_EBP + -0x2c) != '\0'))
    {
      puStack_74 = (undefined1 *)0x1;
      *(undefined1 ***)(unaff_EBP + 0x10) = &puStack_78;
      iStack_7c = 0xb;
      puStack_78 = extraout_ECX_03;
      FUN_00756efd(&puStack_78);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_7c = 0x7528ec;
      iStack_7c = FUN_00449713();
      iVar10 = FUN_00757d85(0x5c,0x10e,iVar9 + 0x20 + *(int *)(unaff_EBP + -0x10));
      iVar9 = iVar9 + iVar10;
    }
    iVar10 = *(int *)(unaff_EBP + 0x20);
    if ((iVar10 != 0) && (iVar10 != *(int *)(unaff_EBP + 0x24))) {
      if (iVar9 < 0x44) {
        iVar9 = 0x44;
      }
      puStack_78 = (undefined1 *)(iVar9 + 0x28 + *(int *)(unaff_EBP + -0x10));
      iStack_7c = 0x75292c;
      puStack_74 = (undefined1 *)iVar10;
      FUN_00759249();
    }
    if (*(int *)(unaff_EBP + 0x28) != 0) {
      if (*(int *)(unaff_EBP + -0x28) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(*(int *)(unaff_EBP + -0x28) + -4);
      }
      puStack_74 = (undefined1 *)(*(int *)(iVar5 + 8) + iVar9 * -0x10);
      puStack_78 = (undefined1 *)0x752953;
      FUN_007509d5();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_0045f10c();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414ebb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
LAB_007529a6:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


