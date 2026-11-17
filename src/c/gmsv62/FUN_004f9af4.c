/* FUN_004f9af4 - 0x004f9af4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004f9af4(void)

{
  int *piVar1;
  IBinding *pIVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 extraout_ECX;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int unaff_EBP;
  bool bVar10;
  undefined1 *puStack_d0;
  wchar_t *pwStack_cc;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_004e5f8c();
  puStack_d0 = &stack0xffffff38;
  *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff38;
  pwStack_cc = (wchar_t *)0xa91;
  FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  pwStack_cc = (wchar_t *)(unaff_EBP + -0x9c);
  puStack_d0 = (undefined1 *)0x4f9b43;
  FUN_0040263d();
  puStack_d0 = (undefined1 *)0x4f9b4a;
  FUN_004048a4();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x88) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar4 != 0) {
    iVar4 = FUN_00404b30();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  pwStack_cc = (wchar_t *)&stack0xffffff3c;
  *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff3c;
  puStack_d0 = (undefined1 *)0x4f9bb4;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pwStack_cc = (wchar_t *)0x4f9bc4;
  FUN_0040263d();
  pwStack_cc = 
  L"䖉叨譑规ࡥ鍨\n倀쾋䗆׼棨᠂贀졅赐\xe04d䗆׼䟨\xf08a诿\xe8c8겧\xfff0\xf08b兓쒋斉栈ઔ"
  ;
  uVar5 = FUN_004048a4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
  *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff38;
  pwStack_cc = (wchar_t *)0xa93;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_d0 = &stack0xffffff38;
  FUN_00679e4e();
  pwStack_cc = (wchar_t *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_d0 = (undefined1 *)0x4f9bf6;
  FUN_0040263d();
  puStack_d0 = (undefined1 *)0x4f9bfd;
  FUN_004048a4();
  *(wchar_t ***)(unaff_EBP + 8) = &pwStack_cc;
  puStack_d0 = (undefined1 *)0xa94;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00679e4e(&pwStack_cc);
  puStack_d0 = (undefined1 *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0040263d();
  pwStack_cc = (wchar_t *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_d0 = (undefined1 *)0x4f9c38;
  iVar6 = FUN_00412550();
  pwStack_cc = 
  L"奙痿Ϩ\xe8f0褀\xfff1\xf003욋疋觬㲆\a贀聅왐ﱅ\xe807轙\xfff0쒃㬌緃倆蓨㟱贀졅왐ﱅ\xe805輿\xfff0쌻絙倆注㟱贀遅왐ﱅ\xe803輧\xfff0쌻絙倆哨㟱\xe800腜-卓譑觌ࡥ౨陏褀䲆\a褀䢞\a\xe800雗\xfff0薍ｔ\xffff赐\xe04d䗆ϼ惨\xf089诿\xe8c8ꯀ\xfff0좋䗆௼엨\xf095㯿觃璅\xffff觿쁝⁴薍ｴ\xffff赐쁍◨\xf0ae㯿緃㴍䀂耀ٴ\xe850\xf0df7薍ｔ\xffff왐ﱅ\xe80d躗\xfff0쌻絙倆쓨㟰栀̐"
  ;
  iVar7 = FUN_00412550();
  iVar8 = FUN_00412550();
  iVar4 = *(int *)(unaff_EBP + -0x14);
  *(int *)(iVar4 + 0x73c) = iVar6 + iVar7 + iVar8;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  pwStack_cc = 
  L"쒃㬌緃倆蓨㟱贀졅왐ﱅ\xe805輿\xfff0쌻絙倆注㟱贀遅왐ﱅ\xe803輧\xfff0쌻絙倆哨㟱\xe800腜-卓譑觌ࡥ౨陏褀䲆\a褀䢞\a\xe800雗\xfff0薍ｔ\xffff赐\xe04d䗆ϼ惨\xf089诿\xe8c8ꯀ\xfff0좋䗆௼엨\xf095㯿觃璅\xffff觿쁝⁴薍ｴ\xffff赐쁍◨\xf0ae㯿緃㴍䀂耀ٴ\xe850\xf0df7薍ｔ\xffff왐ﱅ\xe80d躗\xfff0쌻絙倆쓨㟰栀̐"
  ;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    FUN_00878dfb();
  }
  uVar5 = FUN_007d1e08();
  *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff38;
  pwStack_cc = u_avatar_00964f0c;
  *(undefined4 *)(iVar4 + 0x74c) = uVar5;
  *(undefined4 *)(iVar4 + 0x748) = 0;
  puStack_d0 = (undefined1 *)0x4f9cca;
  FUN_004033a1();
  pwStack_cc = (wchar_t *)(unaff_EBP + -0xac);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_d0 = (undefined1 *)0x4f9cdd;
  FUN_0040263d();
  puStack_d0 = (undefined1 *)0x4f9ce4;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar6 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x8c) = iVar6;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  if (iVar6 != 0) {
    iVar6 = FUN_00404b30();
    if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    FUN_00878dfb();
  }
  pwStack_cc = (wchar_t *)0x4f9d49;
  _memset((void *)(iVar4 + 0x750),0,0x310);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  do {
    FUN_0087a1b0();
    pwStack_cc = *(wchar_t **)(unaff_EBP + -0x18);
    puStack_d0 = (undefined1 *)0x4f9d64;
    pwStack_cc = (wchar_t *)FUN_00412335();
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff38;
    puStack_d0 = (undefined1 *)0x4f9d70;
    FUN_004033a1();
    pwStack_cc = (wchar_t *)(unaff_EBP + -0x80);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_d0 = (undefined1 *)0x4f9d80;
    FUN_0040263d();
    puStack_d0 = (undefined1 *)0x4f9d87;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x84) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    if (iVar4 != 0) {
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x28) == 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_004027eb();
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      do {
        FUN_0087a1b0();
        pwStack_cc = *(wchar_t **)(unaff_EBP + -0x1c);
        puStack_d0 = (undefined1 *)0x4f9e05;
        pwStack_cc = (wchar_t *)FUN_00412335();
        *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xffffff38;
        puStack_d0 = (undefined1 *)0x4f9e11;
        FUN_004033a1();
        pwStack_cc = (wchar_t *)(unaff_EBP + -0x38);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        puStack_d0 = (undefined1 *)0x4f9e21;
        FUN_0040263d();
        puStack_d0 = (undefined1 *)0x4f9e28;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iVar4 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x10) = iVar4;
        *(undefined4 *)(unaff_EBP + 8) = 0;
        if (iVar4 != 0) {
          iVar4 = FUN_00404b30();
          if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + 8) == 0) {
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
        }
        else {
          iVar4 = (*(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + -0x18) * 2) * 0xc4 +
                  *(int *)(unaff_EBP + -0x14);
          *(undefined4 *)(iVar4 + 0x750) = 0xffffffff;
          *(undefined4 *)(iVar4 + 0x758) = 0xffffffff;
          *(undefined4 *)(iVar4 + 0x75c) = 0xffffffff;
          *(undefined4 *)(iVar4 + 0x760) = 0xffffffff;
          *(undefined4 *)(iVar4 + 0x77c) = 0xffffffff;
          *(undefined4 *)(iVar4 + 0x780) = 0xffffffff;
          *(undefined4 *)(iVar4 + 0x784) = 0xffffffff;
          *(undefined4 *)(iVar4 + 0x788) = 0xffffffff;
          *(undefined4 *)(iVar4 + 0x78c) = 0xffffffff;
          *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xffffff3c;
          *(undefined4 *)(iVar4 + 0x790) = 0xffffffff;
          *(undefined4 *)(iVar4 + 0x794) = 0xffffffff;
          pwStack_cc = (wchar_t *)0x4f9eeb;
          FUN_004033a1();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          pwStack_cc = (wchar_t *)0x4f9efb;
          FUN_0040263d();
          pwStack_cc = L"왐ﱅ\xe817虄\xfff1蚉ݔ";
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          uVar5 = FUN_00412550();
          *(undefined4 *)(iVar4 + 0x754) = uVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          pwStack_cc = (wchar_t *)0x4f9f1f;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            FUN_00878dfb();
          }
          *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xffffff3c;
          pwStack_cc = (wchar_t *)0x4f9f3d;
          FUN_004033a1();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          pwStack_cc = (wchar_t *)0x4f9f4d;
          FUN_0040263d();
          pwStack_cc = L"왐ﱅ\xe819藲\xfff1蚉ݤ";
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          uVar5 = FUN_00412550();
          *(undefined4 *)(iVar4 + 0x764) = uVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          pwStack_cc = (wchar_t *)0x4f9f71;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            FUN_00878dfb();
          }
          *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xffffff3c;
          pwStack_cc = (wchar_t *)0x4f9f8f;
          FUN_004033a1();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          pwStack_cc = (wchar_t *)0x4f9f9f;
          FUN_0040263d();
          pwStack_cc = L"왐ﱅ\xe81b薠\xfff1蚉ݬ";
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          uVar5 = FUN_00412550();
          *(undefined4 *)(iVar4 + 0x76c) = uVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          pwStack_cc = (wchar_t *)0x4f9fc3;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
          }
        }
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      } while (*(int *)(unaff_EBP + -0x1c) < 2);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
      }
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
  } while (*(int *)(unaff_EBP + -0x18) < 2);
  VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_00403191();
  pwStack_cc = (wchar_t *)(unaff_EBP + -0x38);
  *(undefined1 ***)(unaff_EBP + -0x3c) = &puStack_d0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00679e4e(&puStack_d0,0xa95);
  iVar4 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar5;
  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x14) + 0xa60;
  iVar4 = FUN_0041a581();
  if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  pwStack_cc = (wchar_t *)0x4fa11e;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_00402676();
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iVar4 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  if (iVar4 == 0) {
    FUN_00878dfb();
  }
  iVar4 = *piVar1;
  *(int *)(unaff_EBP + -0x10) = iVar4;
  if (iVar4 == 0) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x24);
  *(int **)(unaff_EBP + 8) = piVar1;
  uVar5 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  uVar5 = FUN_0040e48b();
  pwStack_cc = *(wchar_t **)(unaff_EBP + -0x50);
  puStack_d0 = *(undefined1 **)(unaff_EBP + -0x54);
  iVar4 = (**(code **)(*piVar1 + 0x2c))
                    (*(undefined4 *)(unaff_EBP + 8),uVar5,*(undefined4 *)(unaff_EBP + -0x10),
                     *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),
                     *(undefined4 *)(unaff_EBP + -0x58));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x60);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x50);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iVar4 = FUN_00402e32(unaff_EBP + -0x50,&DAT_00980690);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_004031b7(0,3);
  bVar10 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  if (bVar10) {
    FUN_00878dfb(0x80004003);
  }
  puVar9 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + -0x10,0,0,0,0,0,unaff_EBP + -0x38,unaff_EBP + -0x50);
  pIVar2 = (IBinding *)*puVar9;
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x14) + 0xa64);
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + 8) = this;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,pIVar2);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x50);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iVar4 = FUN_00402e32(unaff_EBP + -0x38,&DAT_00980690);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
  iVar4 = FUN_00402e32(unaff_EBP + -0x70,&DAT_00980690);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
  iVar4 = FUN_00402e32(unaff_EBP + -0x60,&DAT_00980690);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iVar4 = FUN_00402e32(unaff_EBP + -0x50,&DAT_00980690);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_00403191(&DAT_00980690);
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar4 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004250ac(unaff_EBP + -0xbc,*(undefined4 *)(unaff_EBP + -0x24),unaff_EBP + -0x80,
               unaff_EBP + -0x50,unaff_EBP + -0x60,unaff_EBP + -0x70,unaff_EBP + -0x38);
  iVar4 = FUN_00402bc3(unaff_EBP + -0xbc);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x80);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x50);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x60);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x70);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  puVar9 = (undefined4 *)FUN_00485656(unaff_EBP + -0x10);
  piVar3 = (int *)*puVar9;
  *(undefined2 *)(unaff_EBP + -0x38) = 0xd;
  *(int **)(unaff_EBP + -0x30) = piVar3;
  iVar4 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  (**(code **)(iVar4 + 4))(piVar3);
  iVar4 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0xa64);
  iVar4 = *piVar1;
  *(int **)(unaff_EBP + 8) = piVar1;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  iVar4 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0xa64);
  puVar9 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xa64);
  *(undefined4 **)(unaff_EBP + 8) = puVar9;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*puVar9;
  iVar4 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffffff);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
  iVar4 = FUN_00402e32(unaff_EBP + -0x70,&DAT_00980690);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iVar4 = FUN_00402e32(unaff_EBP + -0x38,&DAT_00980690);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  iVar4 = **(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0xa64);
  iVar4 = *piVar1;
  *(int **)(unaff_EBP + 8) = piVar1;
  iVar4 = (**(code **)(iVar4 + 0x90))
                    (piVar1,0x217,8,*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x70),
                     *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68),
                     *(undefined4 *)(unaff_EBP + -100));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x70);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_004fa96d();
  piVar1 = *(int **)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


