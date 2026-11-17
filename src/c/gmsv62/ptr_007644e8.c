/* ptr_007644e8 - 0x007644e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_007644e8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *in_EAX;
  int iVar4;
  undefined4 uVar5;
  undefined1 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_EDI;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  undefined1 *puStack_2c;
  int iStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  int iStack_18;
  
  while( true ) {
    *unaff_EDI = *(undefined4 *)(unaff_EBP + -0x98);
    unaff_EDI[1] = *(undefined4 *)(unaff_EBP + -0x94);
    unaff_EDI[2] = *(undefined4 *)(unaff_EBP + -0x90);
    *(int **)(unaff_EBP + -0x24) = in_EAX;
    unaff_EDI[3] = *(undefined4 *)(unaff_EBP + -0x8c);
    iVar4 = (**(code **)(param_1 + 0x80))();
    if (iVar4 < 0) {
      iStack_18 = *(int *)(unaff_EBP + -0x24);
      puStack_20 = (undefined1 *)0x76451d;
      iStack_1c = iVar4;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iStack_18 = 0x76452d;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_18 = 0x764538;
      FUN_00878dfb();
    }
    iStack_18 = unaff_EBP + -0x14;
    iStack_1c = 0x76455d;
    FUN_004497f5();
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
    }
    else {
      puStack_20 = (undefined1 *)&iStack_18;
      *(int **)(unaff_EBP + -0x24) = &iStack_18;
      iStack_1c = 0x75e;
      iStack_24 = 0x76458a;
      FUN_00679e4e();
      iStack_1c = unaff_EBP + -0xb8;
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      puStack_20 = (undefined1 *)0x76459d;
      FUN_0040263d();
      puStack_20 = (undefined1 *)0x7645a4;
      iVar4 = FUN_004048a4();
      iStack_18 = 0x3bc;
      iStack_1c = unaff_EBP + -0x1c;
      *(undefined1 *)(unaff_EBP + -4) = 0x4c;
      puStack_20 = (undefined1 *)0x7645ba;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      iStack_1c = 0x7645c6;
      iStack_18 = iVar4;
      FUN_00412550();
      iStack_18 = 0x7645d0;
      iStack_18 = FUN_00449713();
      iStack_1c = unaff_EBP + 8;
      puStack_20 = (undefined1 *)0x7645da;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x4c;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      iStack_18 = 0x7645f9;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_18 = 0x764604;
        FUN_00878dfb();
      }
      iStack_18 = 0x764613;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xa8));
      iStack_18 = unaff_EBP + -0xa8;
      iStack_1c = 0x764620;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        iStack_18 = 0x76462c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4e;
      iStack_18 = 0x764639;
      VariantInit((VARIANTARG *)(unaff_EBP + -200));
      iStack_18 = unaff_EBP + -200;
      iStack_1c = 0x764646;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        iStack_18 = 0x764652;
        FUN_00878dfb();
      }
      iStack_18 = unaff_EBP + -200;
      puStack_20 = (undefined1 *)(unaff_EBP + -0x20);
      iStack_1c = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      iStack_24 = 0x76466f;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x50;
      iStack_1c = 0x76467c;
      iStack_1c = FUN_00449749();
      puStack_20 = (undefined1 *)0x764685;
      iStack_24 = FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_20;
      iStack_28 = 0x764691;
      puStack_20 = extraout_ECX;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x50;
      iStack_24 = 0x7646a3;
      FUN_005afea1();
      iStack_24 = 0x7646aa;
      iVar4 = FUN_005af3ee();
      iStack_24 = (*(int *)(unaff_EBP + -0x18) - iVar4) * 0x26 + 0xeb;
      iStack_28 = 0xb7;
      puStack_2c = (undefined1 *)0x7646c6;
      FUN_004115d9();
      puStack_2c = (undefined1 *)0x7646cd;
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
        iStack_18 = 0x7646de;
        (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4e;
      iStack_18 = 0x7646ee;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_18 = 0x7646f9;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      iStack_18 = 0x764709;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_18 = 0x764714;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        iStack_18 = 0x764725;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    iVar1 = *(int *)(unaff_EBP + -0x78);
    iVar4 = *(int *)(iVar1 + 0x5f8 + *(int *)(iVar1 + 0x63c) * 4);
    if (((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= *(uint *)(unaff_EBP + -0x18))) ||
       (*(int *)(*(int *)(iVar1 + 0x5dc) + 0x38) + 3 <= (int)*(uint *)(unaff_EBP + -0x18))) break;
    iStack_18 = 0;
    iStack_1c = 0;
    puStack_20 = (undefined1 *)0x0;
    iStack_24 = 0;
    iStack_28 = 0;
    puStack_2c = (undefined1 *)0x764332;
    FUN_005afea1();
    puStack_2c = (undefined1 *)0x764339;
    iVar4 = FUN_005af3ee();
    puStack_2c = (undefined1 *)((*(int *)(unaff_EBP + -0x18) - iVar4) * 0x26 + 0xf8);
    piStack_30 = (int *)0x6a;
    piStack_34 = *(int **)(unaff_EBP + -0x18);
    piStack_38 = (int *)0x76435f;
    puVar3 = (undefined4 *)FUN_00537b54();
    piStack_34 = (int *)*puVar3;
    *(int ***)(unaff_EBP + -0x24) = &piStack_38;
    FUN_0046fc23(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    FUN_0048b97b();
    FUN_005558b0();
    iStack_18 = unaff_EBP + -0x88;
    iStack_1c = 0x7643a5;
    FUN_0045a1d8();
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    iStack_18 = 0x7643b2;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    FUN_00414ebb();
    puStack_20 = (undefined1 *)&iStack_18;
    *(int **)(unaff_EBP + -0x24) = &iStack_18;
    iStack_1c = 1;
    iStack_24 = 0x7643d1;
    FUN_007d4a9a();
    FUN_007d3a22();
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    FUN_00449749();
    FUN_00449713();
    *(BADSPACEBASE **)(unaff_EBP + -0x24) = register0x00000010;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    FUN_005afea1();
    FUN_005af3ee();
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    if (*(int **)(unaff_EBP + -0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x7c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(*(int *)(iVar1 + 0x5dc) + 0x38);
    in_EAX = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    if (in_EAX == (int *)0x0) {
      FUN_00878dfb();
      in_EAX = *(int **)(unaff_EBP + -0x10);
    }
    param_1 = *in_EAX;
    unaff_EDI = (undefined4 *)register0x00000010;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
    iStack_18 = 0x764746;
    (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_18 = 0x764757;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -0x80) = 0;
  iVar4 = *(int *)(iVar1 + 0x638);
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  if (iVar4 == 0) {
    iStack_18 = 0x76541b;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
    iStack_18 = unaff_EBP + -0x74;
    iStack_1c = 0x765425;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_18 = 0x765431;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x8c;
    iStack_18 = 0x76543b;
    VariantInit((VARIANTARG *)(unaff_EBP + -100));
    iStack_18 = unaff_EBP + -100;
    iStack_1c = 0x765445;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_18 = 0x765451;
      FUN_00878dfb();
    }
    iStack_18 = 0;
    iStack_1c = unaff_EBP + -0x74;
    puStack_20 = (undefined1 *)(unaff_EBP + -100);
    puStack_2c = (undefined1 *)&iStack_24;
    *(int **)(unaff_EBP + -0x20) = &iStack_24;
    iStack_28 = 0x9e1;
    *(undefined1 *)(unaff_EBP + -4) = 0x8d;
    piStack_30 = (int *)0x765475;
    FUN_00679e4e();
    iStack_28 = unaff_EBP + -0xb8;
    *(undefined1 *)(unaff_EBP + -4) = 0x8d;
    puStack_2c = (undefined1 *)0x765485;
    FUN_00405a1d();
    puStack_2c = (undefined1 *)0x76548c;
    FUN_00402660();
    puStack_2c = (undefined1 *)0x765493;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x8f;
    iStack_1c = 0x76549e;
    uVar5 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + 8) = uVar5;
    iStack_18 = 0x7654ad;
    iVar4 = FUN_0041a581();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      iStack_18 = 0x7654be;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x8d;
    iStack_18 = 0x7654ce;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_18 = 0x7654d9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x8c;
    iStack_18 = 0x7654e6;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_18 = 0x7654f1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x87;
  }
  else {
    iStack_18 = 0x76532d;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
    iStack_18 = unaff_EBP + -0x74;
    iStack_1c = 0x765337;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_18 = 0x765343;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x88;
    iStack_18 = 0x76534d;
    VariantInit((VARIANTARG *)(unaff_EBP + -100));
    iStack_18 = unaff_EBP + -100;
    iStack_1c = 0x765357;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_18 = 0x765363;
      FUN_00878dfb();
    }
    iStack_18 = 0;
    iStack_1c = unaff_EBP + -0x74;
    puStack_20 = (undefined1 *)(unaff_EBP + -100);
    puStack_2c = (undefined1 *)&iStack_24;
    *(int **)(unaff_EBP + -0x20) = &iStack_24;
    iStack_28 = 0x9e0;
    *(undefined1 *)(unaff_EBP + -4) = 0x89;
    piStack_30 = (int *)0x765387;
    FUN_00679e4e();
    iStack_28 = unaff_EBP + -0xb8;
    *(undefined1 *)(unaff_EBP + -4) = 0x89;
    puStack_2c = (undefined1 *)0x765397;
    FUN_00405a1d();
    puStack_2c = (undefined1 *)0x76539e;
    FUN_00402660();
    puStack_2c = (undefined1 *)0x7653a5;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x8b;
    iStack_1c = 0x7653b0;
    uVar5 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + 8) = uVar5;
    iStack_18 = 0x7653bf;
    iVar4 = FUN_0041a581();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      iStack_18 = 0x7653d0;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x89;
    iStack_18 = 0x7653e0;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_18 = 0x7653eb;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x88;
    iStack_18 = 0x7653f8;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_18 = 0x765403;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x87;
  }
  iStack_18 = 0x7654fe;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_18 = 0x765509;
    FUN_00878dfb();
  }
  iStack_18 = 0xff;
  iStack_1c = 0x765518;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x90;
  if (*(int *)(unaff_EBP + -0x54) == 0) {
    iStack_18 = 0x76552b;
    FUN_00878dfb();
  }
  piVar2 = *(int **)(unaff_EBP + -0x54);
  iStack_24 = *(int *)(unaff_EBP + -0x80);
  puStack_20 = *(undefined1 **)(unaff_EBP + -100);
  iStack_1c = *(undefined4 *)(unaff_EBP + -0x60);
  iStack_28 = 0x1e;
  iStack_18 = *(int *)(unaff_EBP + -0x5c);
  puStack_2c = (undefined1 *)0xa;
  piStack_34 = (int *)0x76554a;
  piStack_30 = piVar2;
  iVar4 = (**(code **)(*piVar2 + 0x80))();
  if (iVar4 < 0) {
    piStack_34 = (int *)&DAT_00963cc8;
    piStack_38 = piVar2;
    FUN_00878e09(iVar4);
  }
  piStack_34 = (int *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  piStack_38 = (int *)0x765567;
  piStack_34 = (int *)FUN_00402bc3();
  if ((int)piStack_34 < 0) {
    piStack_38 = (int *)0x765572;
    FUN_00878dfb();
  }
  piStack_34 = *(int **)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_34 != (int *)0x0) {
    piStack_38 = (int *)0x765583;
    (**(code **)(*piStack_34 + 8))();
  }
  piStack_34 = *(int **)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_34 != (int *)0x0) {
    piStack_38 = (int *)0x765594;
    (**(code **)(*piStack_34 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_34 = (int *)0x7655a0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


