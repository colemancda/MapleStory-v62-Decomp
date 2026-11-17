/* FUN_00605436 - 0x00605436 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00605436(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  int unaff_EBP;
  undefined1 auStack_90 [4];
  undefined4 uStack_8c;
  int *piStack_88;
  int iStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  int iStack_74;
  int iStack_70;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7();
  piVar5 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar5 == (int *)0x0) {
    FUN_00878dfb();
    piVar5 = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piVar5;
  *(int **)(unaff_EBP + -0x20) = piVar5;
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    iStack_70 = *(int *)(unaff_EBP + -0x20);
    puStack_78 = (undefined1 *)0x6054ab;
    iStack_74 = iVar2;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_70 = 0x6054b8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_70 = 0x6054c3;
    FUN_00878dfb();
  }
  pcVar1 = *(char **)(*(int *)(unaff_EBP + -0x10) + 0x520);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    iVar2 = *(int *)(unaff_EBP + -0x10);
  }
  else {
    iStack_70 = 0x6054ed;
    FUN_00403191();
    iStack_70 = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_74 = 0x605500;
    FUN_004031b7();
    iVar2 = *(int *)(unaff_EBP + -0x10);
    iStack_70 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_74 = 0x60551a;
    iStack_74 = FUN_00449749();
    puStack_78 = (undefined1 *)0x605522;
    uStack_7c = FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_78;
    puStack_80 = (undefined1 *)0x60552e;
    puStack_78 = extraout_ECX_00;
    FUN_00448a17();
    uStack_7c = 0xea;
    puStack_80 = (undefined1 *)0x8d;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_84 = 0x605544;
    FUN_004115d9();
    iStack_84 = 0x60554b;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_70 = 0x605558;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_70 = 0x605563;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_70 = 0x605570;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_70 = 0x60557b;
      FUN_00878dfb();
    }
  }
  if (*(int *)(iVar2 + 4) != 0) {
    uStack_8c = FUN_0045e2eb();
    iStack_70 = 0;
    iStack_74 = 0;
    puStack_78 = (undefined1 *)0x0;
    uStack_7c = 0;
    puStack_80 = (undefined1 *)0x0;
    iStack_84 = 0x11d;
    piStack_88 = (int *)0x7a;
    *(undefined4 *)(unaff_EBP + -0x20) = uStack_8c;
    *(undefined1 **)(unaff_EBP + -0x24) = auStack_90;
    FUN_0046fc23(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0048b97b();
    FUN_005558b0();
    iVar3 = FUN_0045e2eb();
    iStack_70 = 0x6055d6;
    iVar4 = FUN_00537942();
    iStack_70 = iVar3;
    if (iVar4 == 0) {
      iStack_74 = iVar2 + 0x51c;
      *(int **)(unaff_EBP + -0x24) = &iStack_70;
      puStack_78 = (undefined1 *)0x6055ee;
      FUN_00424dbc();
      iStack_74 = *(undefined4 *)(iVar2 + 0x14);
      iStack_84 = unaff_EBP + 8;
      puStack_78 = (undefined1 *)0x111;
      uStack_7c = 0x7a;
      *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_80;
      piStack_88 = (int *)0x605607;
      puStack_80 = extraout_ECX_01;
      FUN_0046fc23();
      iStack_84 = 0x60560c;
      FUN_007d3201();
    }
    iStack_70 = unaff_EBP + -0x1c;
    iStack_74 = 0x605621;
    FUN_0045a1d8();
    puStack_78 = (undefined1 *)&iStack_70;
    *(int **)(unaff_EBP + -0x24) = &iStack_70;
    iStack_74 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_7c = 0x605635;
    FUN_007d4a9a();
    iStack_74 = unaff_EBP + -0x1c;
    puStack_78 = (undefined1 *)0x605640;
    FUN_007d3a22();
    iStack_70 = 0x60564c;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_70 = 0x605659;
    FUN_00403191();
    iStack_70 = unaff_EBP + -0x48;
    puStack_78 = (undefined1 *)(unaff_EBP + -0x24);
    iStack_74 = 1;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_7c = 0x605670;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_74 = 0x60567d;
    iStack_74 = FUN_00449749();
    puStack_78 = (undefined1 *)0x605686;
    uStack_7c = FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_78;
    puStack_80 = (undefined1 *)0x605692;
    puStack_78 = extraout_ECX_02;
    FUN_00448a17();
    uStack_7c = 0xfe;
    puStack_80 = (undefined1 *)0xa4;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_84 = 0x6056a8;
    FUN_004115d9();
    iStack_84 = 0x6056af;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_70 = 0x6056c0;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_70 = 0x6056cd;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_70 = 0x6056d8;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_70 = 0x6056e5;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_70 = 0x6056f0;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iStack_70 = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_74 = 0x605702;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_70 = 0x605716;
    iVar3 = FUN_00554db7();
    *(int *)(unaff_EBP + -0x24) = iVar3;
    if (iVar3 == 0) {
      iStack_70 = unaff_EBP + -0x24;
      iStack_74 = 0x605767;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_70 = 0x605774;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00414ebb();
      iStack_70 = unaff_EBP + -0x24;
      iStack_74 = 0x60578b;
      puVar6 = (undefined4 *)FUN_007d4a9a();
      iStack_70 = 0x605797;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
                 (IBinding *)*puVar6);
      if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
        iStack_70 = 0x6057a4;
        (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
      }
    }
    else {
      iStack_70 = unaff_EBP + -0x20;
      iStack_74 = 0x605730;
      piVar5 = (int *)FUN_00679d22();
      iStack_70 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_74 = unaff_EBP + -0x14;
      puStack_78 = (undefined1 *)0x605743;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00414ebb();
    }
    iStack_70 = 0x6057ae;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_70 = unaff_EBP + -0x48;
    iStack_74 = 0x6057b8;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_70 = 0x6057c4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_70 = 0x6057d2;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_70 = unaff_EBP + -0x38;
    iStack_74 = 0x6057dc;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_70 = 0x6057e8;
      FUN_00878dfb();
    }
    iStack_70 = unaff_EBP + -0x38;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_74 = 0x6057fc;
    iStack_74 = FUN_00449749();
    puStack_78 = (undefined1 *)0x605805;
    uStack_7c = FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_78;
    puStack_80 = (undefined1 *)0x605811;
    puStack_78 = extraout_ECX_03;
    FUN_00448a17();
    uStack_7c = 0x111;
    puStack_80 = (undefined1 *)0xa5;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_84 = 0x605827;
    FUN_004115d9();
    iStack_84 = 0x60582e;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_70 = 0x60583b;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_70 = 0x605846;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_70 = 0x605853;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_70 = 0x60585e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      iStack_70 = 0x60586f;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  if (*(int *)(iVar2 + 0x20) != 0) {
    iStack_70 = 0xff;
    iStack_74 = 0x60589c;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar2 + 0x514);
    piVar5 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (piVar5 == (int *)0x0) {
      iStack_70 = 0x6058ba;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar5;
    uStack_7c = *(undefined4 *)(unaff_EBP + -0x24);
    puStack_78 = *(undefined1 **)(unaff_EBP + -0x48);
    iStack_74 = *(int *)(unaff_EBP + -0x44);
    puStack_80 = (undefined1 *)0x15d;
    iStack_70 = *(int *)(unaff_EBP + -0x40);
    iStack_84 = 0;
    *(int **)(unaff_EBP + -0x20) = piVar5;
    uStack_8c = 0x6058df;
    piStack_88 = piVar5;
    iVar2 = (**(code **)(iVar2 + 0x80))();
    if (iVar2 < 0) {
      iStack_70 = *(int *)(unaff_EBP + -0x20);
      puStack_78 = (undefined1 *)0x6058f1;
      iStack_74 = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_70 = 0x6058fe;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_70 = 0x605909;
      FUN_00878dfb();
    }
    iVar2 = *(int *)(unaff_EBP + -0x10);
  }
  if (*(int *)(iVar2 + 0x1c) == 0) {
    iStack_70 = unaff_EBP + -0x1c;
    iStack_74 = 0x605921;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_70 = 0x605933;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_70 = unaff_EBP + -0x38;
    iStack_74 = 0x60593d;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_70 = 0x605949;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_70 = 0x605953;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_70 = unaff_EBP + -0x48;
    iStack_74 = 0x60595d;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_70 = 0x605969;
      FUN_00878dfb();
    }
    iStack_70 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_74 = 0x60597d;
    iStack_74 = FUN_00449749();
    puStack_80 = (undefined1 *)&puStack_78;
    *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_78;
    uStack_7c = 0xeec;
    iStack_84 = 0x605996;
    FUN_00679e4e();
    uStack_7c = 0x7a;
    puStack_80 = (undefined1 *)0x59;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_84 = 0x6059a6;
    FUN_004115d9();
    iStack_84 = 0x6059ad;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_70 = 0x6059ba;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_70 = 0x6059c5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_70 = 0x6059d2;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_70 = 0x6059dd;
      FUN_00878dfb();
    }
    iStack_70 = 0x6059e3;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_70 = unaff_EBP + -0x38;
    iStack_74 = 0x6059ed;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_70 = 0x6059f9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_70 = 0x605a03;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_70 = unaff_EBP + -0x48;
    iStack_74 = 0x605a0d;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_70 = 0x605a19;
      FUN_00878dfb();
    }
    iStack_70 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_74 = 0x605a2d;
    iStack_74 = FUN_00449749();
    puStack_80 = (undefined1 *)&puStack_78;
    *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_78;
    uStack_7c = 0xeed;
    iStack_84 = 0x605a41;
    puStack_78 = extraout_ECX_04;
    FUN_00679e4e();
    uStack_7c = 0x87;
    puStack_80 = (undefined1 *)0x59;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_84 = 0x605a54;
    FUN_004115d9();
    iStack_84 = 0x605a5b;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_70 = 0x605a68;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_70 = 0x605a73;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_70 = 0x605a80;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_70 = 0x605a8b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      iStack_70 = 0x605a9c;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_70 = 0x605aad;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


