/* FUN_0074047a - 0x0074047a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0074047a(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  char cVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  int *extraout_ECX;
  int unaff_EBP;
  bool bVar6;
  undefined4 uStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined *puStack_80;
  int *piStack_7c;
  
  FUN_00879bb8();
  iVar4 = extraout_ECX[0x2cc];
  *(undefined4 *)(unaff_EBP + -0x18) = DAT_009784c0;
  if (iVar4 == 0) {
    if ((((extraout_ECX[0x319] == 3) && (*(int *)(unaff_EBP + 8) < 0x244)) &&
        (*(int *)(unaff_EBP + 0xc) < extraout_ECX[0x31c] + 5)) &&
       (extraout_ECX[0x31c] + -5 < *(int *)(unaff_EBP + 0xc))) {
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x309);
      if (extraout_ECX[0x309] != 0) {
        piStack_7c = (int *)0x740502;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)0x0);
      }
      piStack_7c = (int *)0x74050f;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      piStack_7c = (int *)0x74051f;
      FUN_00403191();
      bVar6 = DAT_0097c1ac == 0;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (bVar6) {
        piStack_7c = (int *)0x740535;
        FUN_00878dfb();
      }
      piStack_7c = (int *)(unaff_EBP + -0x34);
      puStack_80 = (undefined *)0x0;
      puVar2 = (undefined4 *)FUN_0042a39f();
      piStack_7c = (int *)0x74055f;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_7c = (int *)0x740574;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_7c = (int *)0x74057f;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_7c = (int *)0x74058c;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_7c = (int *)0x740597;
        FUN_00878dfb();
      }
      if (*(int *)this == 0) {
        piStack_7c = (int *)0x7405a5;
        FUN_00878dfb();
      }
      piStack_7c = *(int **)this;
      iVar4 = *piStack_7c;
      *(int **)(unaff_EBP + -0x20) = piStack_7c;
      puStack_80 = (undefined *)0x7405b5;
      iVar4 = (**(code **)(iVar4 + 0xe0))();
      if (iVar4 < 0) {
        puStack_80 = &DAT_00963df8;
        FUN_00878e09();
      }
      puStack_80 = (undefined *)(unaff_EBP + -0x24);
      FUN_004489f5();
      puStack_80 = (undefined *)0x1;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_0040ee87();
      iVar4 = *(int *)this;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar4 == 0) {
        puStack_80 = (undefined *)0x80004003;
        FUN_00878dfb();
      }
      iVar4 = **(int **)this;
      *(int **)(unaff_EBP + -0x20) = *(int **)this;
      puStack_80 = *(undefined **)(unaff_EBP + -0x38);
      iVar4 = (**(code **)(iVar4 + 100))();
      if (iVar4 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
      }
      FUN_004489f5();
      *(undefined4 *)(unaff_EBP + -4) = 4;
      FUN_0040ee87();
      iVar4 = extraout_ECX[0x309];
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (iVar4 == 0) {
        FUN_00878dfb();
      }
      iVar4 = *(int *)extraout_ECX[0x309];
      *(int **)(unaff_EBP + -0x24) = (int *)extraout_ECX[0x309];
      iVar4 = (**(code **)(iVar4 + 0xfc))();
      if (iVar4 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
      }
      piVar5 = extraout_ECX + 0x309;
      if (extraout_ECX[0x309] == 0) {
        FUN_00878dfb();
      }
      iVar4 = (**(code **)(*(int *)*piVar5 + 0xb4))();
      if (iVar4 < 0) {
        FUN_00878e09();
      }
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 6;
      FUN_00403191();
      iVar4 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (iVar4 == 0) {
        FUN_00878dfb();
      }
      iVar4 = *(int *)*piVar5;
      *(int **)(unaff_EBP + -0x24) = (int *)*piVar5;
      iVar4 = (**(code **)(iVar4 + 0x90))();
      if (iVar4 < 0) {
        iStack_e0 = *(undefined4 *)(unaff_EBP + -0x24);
        iStack_e8 = 0x740789;
        iStack_e4 = iVar4;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_e0 = 0x740796;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_e0 = 0x7407a1;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_e0 = 0x7407ae;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_e0 = 0x7407b9;
        FUN_00878dfb();
      }
      iStack_e0 = 0;
      iStack_e4 = 0x7407c4;
      FUN_004031b7();
      iVar4 = extraout_ECX[0x309];
      *(undefined4 *)(unaff_EBP + -4) = 8;
      if (iVar4 == 0) {
        iStack_e0 = 0x7407e3;
        FUN_00878dfb();
      }
      iStack_e0 = unaff_EBP + -0x14;
      iStack_e4 = 0x7407f2;
      FUN_00425067();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_e0 = 0x7407ff;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_e0 = 0x74080a;
        FUN_00878dfb();
      }
      iStack_e0 = 0x740814;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
      iStack_e0 = unaff_EBP + -0x34;
      iStack_e4 = 0x740823;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        iStack_e0 = 0x74082f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_e0 = 0x74083c;
      FUN_00403191();
      iStack_e0 = 0;
      iStack_e4 = unaff_EBP + -0x34;
      iStack_e8 = unaff_EBP + -0x54;
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_ec;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00679e4e(&uStack_ec,0xb05);
      iVar4 = unaff_EBP + -0x74;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00405a1d(iVar4);
      FUN_00402660();
      FUN_00404a02(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_e4 = 0x740886;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x24) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (iVar4 != 0) {
        iStack_e0 = 0x74089c;
        iVar4 = FUN_0041a581();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          iStack_e0 = 0x7408ad;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_e0 = 0x7408ba;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_e0 = 0x7408c5;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_e0 = 0x7408d2;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_e0 = 0x7408dd;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_e0 = 0x7408ea;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_e0 = 0x7408f5;
        FUN_00878dfb();
      }
      iStack_e0 = 0xff;
      iStack_e4 = 0x740904;
      FUN_004031b7();
      piVar5 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      if (piVar5 == (int *)0x0) {
        iStack_e0 = 0x740919;
        FUN_00878dfb();
        piVar5 = *(int **)(unaff_EBP + -0x14);
      }
      iVar4 = *piVar5;
      uStack_ec = *(undefined4 *)(unaff_EBP + -0x10);
      iStack_e8 = *(undefined4 *)(unaff_EBP + -100);
      iStack_e4 = *(int *)(unaff_EBP + -0x60);
      iStack_e0 = *(undefined4 *)(unaff_EBP + -0x5c);
      *(int **)(unaff_EBP + -0x20) = piVar5;
      puVar3 = (undefined *)(**(code **)(iVar4 + 0x80))(piVar5,0,0);
      if ((int)puVar3 < 0) {
        piStack_7c = *(int **)(unaff_EBP + -0x20);
        puStack_80 = puVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      piStack_7c = (int *)0x74095a;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_7c = (int *)0x740965;
        FUN_00878dfb();
      }
      piStack_7c = (int *)0x74096f;
      FUN_00526a75();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_7c = (int *)0x740980;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        piStack_7c = (int *)0x740991;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
    }
    else {
      if (extraout_ECX[0x309] != 0) {
        piStack_7c = (int *)0x740a2e;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x309),
                   (IBinding *)0x0);
      }
      piStack_7c = (int *)0x740a36;
      FUN_00526a75();
    }
  }
  else {
    piStack_7c = *(int **)(unaff_EBP + 0xc);
    puStack_80 = *(undefined **)(unaff_EBP + 8);
    FUN_0073ecb5();
  }
  if (extraout_ECX[0x31d] != 0) {
    piStack_7c = *(int **)(unaff_EBP + 8);
    puStack_80 = (undefined *)0x7409ad;
    iVar4 = FUN_007467b1();
    if (iVar4 == -1) {
      if (extraout_ECX[0x19] != 1) {
        FUN_0074d6fb();
      }
    }
    else {
      piStack_7c = (int *)0x7409c2;
      FUN_00526a75();
      cVar1 = (char)extraout_ECX[iVar4 * 3 + 0x321];
      if ((cVar1 == '\x02') || (cVar1 == '\a')) {
        piStack_7c = (int *)(unaff_EBP + -0x1c);
        puStack_80 = (undefined *)0x740a7f;
        FUN_00554ef3();
        *(undefined ***)(unaff_EBP + -0x24) = &puStack_80;
        *(undefined4 *)(unaff_EBP + -4) = 0x14;
        FUN_0068684c();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        piVar5 = (int *)FUN_0053793e();
        iVar4 = *piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        (**(code **)(iVar4 + 4))();
        FUN_0053793e();
        (**(code **)(*extraout_ECX + 0x30))();
        (**(code **)(*extraout_ECX + 0x2c))();
        FUN_007529b7();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          piStack_7c = (int *)0x740af9;
          FUN_00449913();
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
      }
      else if (cVar1 == '\x01') {
        piStack_7c = *(int **)((int)(extraout_ECX + iVar4 * 3 + 0x321) + 1);
        puStack_80 = (undefined *)0x7409f2;
        piStack_7c = (int *)FUN_0064d61f();
        puStack_80 = (undefined *)0x7409fa;
        iVar4 = (**(code **)(*extraout_ECX + 0x30))();
        puStack_80 = (undefined *)(iVar4 + -0x80 + *(int *)(unaff_EBP + 0xc));
        (**(code **)(*extraout_ECX + 0x2c))();
        FUN_00755feb();
      }
      else if (cVar1 == '\b') {
        piStack_7c = (int *)0x740a4d;
        iVar4 = (**(code **)(*extraout_ECX + 0x30))();
        piStack_7c = (int *)(iVar4 + -0x80 + *(int *)(unaff_EBP + 0xc));
        puStack_80 = (undefined *)0x740a5c;
        iVar4 = (**(code **)(*extraout_ECX + 0x2c))();
        puStack_80 = (undefined *)(iVar4 + *(int *)(unaff_EBP + 8));
        FUN_00755c88();
      }
    }
    piStack_7c = *(int **)(unaff_EBP + 8);
    puStack_80 = (undefined *)0x740b1a;
    FUN_007401e1();
  }
  FUN_0074d6fb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


