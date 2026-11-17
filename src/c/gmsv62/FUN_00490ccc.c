/* FUN_00490ccc - 0x00490ccc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00490ccc(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined4 *extraout_ECX_05;
  undefined4 *extraout_ECX_06;
  int *piVar5;
  undefined1 *puVar6;
  int unaff_EBP;
  int *piVar7;
  uint uVar8;
  undefined4 uStack_34c;
  undefined *puStack_348;
  int *piStack_344;
  undefined1 *puStack_340;
  int iStack_33c;
  undefined4 *puStack_338;
  undefined1 *puStack_334;
  int *piStack_32c;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  FUN_0081622a();
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    FUN_00878dfb();
  }
  piVar7 = *(int **)(unaff_EBP + 8);
  iVar1 = (**(code **)(*piVar7 + 0x8c))();
  if (iVar1 < 0) {
    puStack_334 = (undefined1 *)0x490d3a;
    piStack_32c = piVar7;
    FUN_00878e09();
  }
  iVar1 = FUN_00492e66();
  if (iVar1 == 0) {
    FUN_00426311();
    FUN_00426311();
  }
  if (((*(int *)(extraout_ECX + 0x164) == 0) && (*(int *)(extraout_ECX + 0x71c) != 0)) &&
     (*(int *)(*(int *)(extraout_ECX + 0x71c) + -4) != 0)) {
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    while ((iVar1 = *(int *)(extraout_ECX + 0x71c), iVar1 != 0 &&
           (*(uint *)(unaff_EBP + -0x4c) < *(uint *)(iVar1 + -4)))) {
      piVar7 = (int *)(*(int *)(unaff_EBP + -0x38) + iVar1);
      piStack_32c = (int *)0x490db0;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_32c = (int *)0x490dc4;
      FUN_00403191();
      piStack_32c = (int *)0x0;
      puStack_334 = (undefined1 *)(unaff_EBP + -0x8c);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puStack_338 = (undefined4 *)0x490ddd;
      iStack_33c = FUN_00411641();
      *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_338;
      puStack_340 = (undefined1 *)0x490de9;
      FUN_004033a1();
      iStack_33c = unaff_EBP + -0x104;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puStack_340 = (undefined1 *)0x490df9;
      FUN_00405a1d();
      puStack_340 = (undefined1 *)0x490e00;
      FUN_00402660();
      puStack_340 = (undefined1 *)0x490e07;
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x10) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar1 != 0) {
        piStack_32c = (int *)0x490e28;
        iVar1 = FUN_0041a581();
        if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
          piStack_32c = (int *)0x490e39;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_32c = (int *)0x490e49;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_32c = (int *)0x490e54;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_32c = (int *)0x490e64;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_32c = (int *)0x490e6f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      piStack_32c = (int *)0x490e7c;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_32c = (int *)0x490e87;
        FUN_00878dfb();
      }
      piStack_32c = (int *)0xff;
      FUN_004031b7();
      piVar5 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (piVar5 == (int *)0x0) {
        piStack_32c = (int *)0x490eae;
        FUN_00878dfb();
        piVar5 = *(int **)(unaff_EBP + 8);
      }
      iStack_33c = piVar7[1];
      puStack_340 = (undefined1 *)*piVar7;
      puStack_338 = *(undefined4 **)(unaff_EBP + -0x14);
      puStack_334 = *(undefined1 **)(unaff_EBP + -0xe0);
      piStack_32c = *(int **)(unaff_EBP + -0xd8);
      piStack_344 = *(int **)(unaff_EBP + 8);
      *(int **)(unaff_EBP + -0x5c) = piVar5;
      puStack_348 = (undefined *)0x490ed8;
      iVar1 = (**(code **)(*piVar5 + 0x80))();
      if (iVar1 < 0) {
        piStack_32c = *(int **)(unaff_EBP + -0x5c);
        puStack_334 = (undefined1 *)0x490eea;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      piStack_32c = (int *)0x490efa;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_32c = (int *)0x490f05;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_004125e6();
      *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x4c) + 1;
      *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 0xc;
    }
  }
  iVar1 = *(int *)(extraout_ECX + 0x164);
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (0 < iVar1) {
    do {
      iVar1 = *(int *)(unaff_EBP + -0x20);
      piStack_32c = (int *)(unaff_EBP + -0x48);
      FUN_004927e9();
      piStack_32c = (int *)0xff;
      FUN_004031b7();
      piVar7 = *(int **)(unaff_EBP + 8);
      puVar3 = *(undefined4 **)(iVar1 + 0x214);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (piVar7 == (int *)0x0) {
        piStack_32c = (int *)0x490f6c;
        FUN_00878dfb();
        piVar7 = *(int **)(unaff_EBP + 8);
      }
      iVar1 = *piVar7;
      puStack_334 = *(undefined1 **)(unaff_EBP + -0x8c);
      iStack_33c = *(int *)(unaff_EBP + -0x44);
      piStack_32c = *(int **)(unaff_EBP + -0x84);
      puStack_340 = *(undefined1 **)(unaff_EBP + -0x48);
      *(int **)(unaff_EBP + -0x10) = piVar7;
      puStack_348 = (undefined *)0x490f91;
      piStack_344 = piVar7;
      puStack_338 = puVar3;
      iVar1 = (**(code **)(iVar1 + 0x80))();
      if (iVar1 < 0) {
        piStack_32c = *(int **)(unaff_EBP + -0x10);
        puStack_334 = (undefined1 *)0x490fa3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_32c = (int *)0x490fb3;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_32c = (int *)0x490fbe;
        FUN_00878dfb();
      }
      iVar1 = *(int *)(unaff_EBP + -0x20);
      iVar2 = FUN_0045dc32();
      if ((iVar2 == 0) && (*(int *)(unaff_EBP + -0x2c) == *(int *)(iVar1 + 0x168))) {
        piStack_32c = (int *)0xff;
        FUN_004031b7();
        piVar7 = *(int **)(unaff_EBP + 8);
        puVar3 = *(undefined4 **)(iVar1 + 0x228);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (piVar7 == (int *)0x0) {
          piStack_32c = (int *)0x49100d;
          FUN_00878dfb();
          piVar7 = *(int **)(unaff_EBP + 8);
        }
        puStack_334 = *(undefined1 **)(unaff_EBP + -0x7c);
        iStack_33c = *(int *)(unaff_EBP + -0x44) + 4;
        puStack_340 = (undefined1 *)(*(int *)(unaff_EBP + -0x48) + 4);
        piStack_32c = *(int **)(unaff_EBP + -0x74);
        piStack_344 = *(int **)(unaff_EBP + 8);
        *(int **)(unaff_EBP + -0x10) = piVar7;
        puStack_348 = (undefined *)0x491039;
        puStack_338 = puVar3;
        iVar1 = (**(code **)(*piVar7 + 0x80))();
        if (iVar1 < 0) {
          piStack_32c = *(int **)(unaff_EBP + -0x10);
          puStack_334 = (undefined1 *)0x49104b;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        piStack_32c = (int *)0x491058;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          piStack_32c = (int *)0x491063;
          FUN_00878dfb();
        }
      }
      *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
    } while (*(int *)(unaff_EBP + -0x2c) < *(int *)(*(int *)(unaff_EBP + -0x20) + 0x164));
  }
  iVar1 = *(int *)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (0 < *(int *)(iVar1 + 0x164)) {
    do {
      iVar2 = *(int *)(unaff_EBP + -0x2c);
      piStack_32c = (int *)(unaff_EBP + -0x48);
      FUN_004927e9();
      if (-1 < *(int *)(iVar1 + 0x170 + iVar2 * 4)) {
        piStack_32c = (int *)(unaff_EBP + -0x34);
        FUN_004903a3();
        if (*(int *)(unaff_EBP + -0x30) == 0) {
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_0045e46f();
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x50) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iVar2 = FUN_0045e2eb();
          if (iVar2 / 100000 == 0x5b) {
            piStack_32c = (int *)0x1;
            puStack_334 = (undefined1 *)(*(int *)(unaff_EBP + -0x48) + 7);
            puStack_338 = (undefined4 *)0x49110b;
            FUN_00469862();
            puStack_338 = (undefined4 *)0x491115;
            puStack_338 = (undefined4 *)thunk_FUN_0045e2eb();
            puStack_340 = (undefined1 *)(unaff_EBP + 8);
            *(int **)(unaff_EBP + -0x1c) = &iStack_33c;
            piStack_344 = (int *)0x491125;
            iStack_33c = extraout_ECX_00;
            FUN_0046fc23();
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            puStack_340 = (undefined1 *)0x49112e;
            FUN_0048b97b();
            puStack_340 = (undefined1 *)0x491135;
            FUN_00556c6a();
            FUN_0045e2eb();
            piStack_32c = (int *)(unaff_EBP + -0x94);
            FUN_00556acf();
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            piStack_32c = (int *)0x491162;
            FUN_00414f8b();
            iVar2 = *(int *)(unaff_EBP + -0x94);
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
          }
          else {
            piStack_32c = (int *)0x0;
            puStack_334 = (undefined1 *)0x0;
            puStack_338 = (undefined4 *)0x1;
            puStack_340 = (undefined1 *)(*(int *)(unaff_EBP + -0x44) + 0x49);
            iStack_33c = 0;
            piStack_344 = (int *)(*(int *)(unaff_EBP + -0x48) + 7);
            puStack_348 = (undefined *)0x49118c;
            FUN_00469862();
            puStack_348 = (undefined *)0x491196;
            puStack_348 = (undefined *)thunk_FUN_0045e2eb();
            *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_34c;
            uStack_34c = extraout_ECX_01;
            FUN_0046fc23(unaff_EBP + 8);
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            FUN_0048b97b();
            FUN_005558b0();
            FUN_0045e2eb();
            piStack_32c = (int *)(unaff_EBP + -0x9c);
            FUN_0045a1d8();
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            piStack_32c = (int *)0x4911e3;
            FUN_00414f8b();
            iVar2 = *(int *)(unaff_EBP + -0x9c);
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
          }
          if (iVar2 != 0) {
            piStack_32c = (int *)0x4911fa;
            FUN_00434e38();
          }
          piStack_32c = (int *)0xe;
          FUN_0045e2eb();
          puStack_334 = (undefined1 *)0x491210;
          iVar2 = FUN_0044d79d();
          piStack_32c = extraout_ECX_02;
          if (iVar2 != 0) {
            piStack_32c = (int *)(unaff_EBP + -0xa4);
            puVar3 = (undefined4 *)FUN_00679d22();
            piStack_32c = (int *)*puVar3;
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            puStack_334 = (undefined1 *)0x491240;
            FUN_00434e21();
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            piStack_32c = extraout_ECX_03;
            if (*(int *)(unaff_EBP + -0xa4) != 0) {
              piStack_32c = (int *)0x49125a;
              piVar7 = (int *)(*(int *)(unaff_EBP + -0xa4) + -0xc);
              FUN_00434e38();
              piStack_32c = piVar7;
            }
          }
          puStack_334 = (undefined1 *)&piStack_32c;
          *(int ***)(unaff_EBP + -0x1c) = &piStack_32c;
          puStack_338 = (undefined4 *)0x49126b;
          FUN_007d4a9a();
          puStack_334 = (undefined1 *)0x491276;
          FUN_007d3a22();
          piStack_32c = (int *)0x49128a;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          piStack_32c = (int *)0x49129a;
          FUN_00403191();
          piStack_32c = (int *)(unaff_EBP + -0x134);
          puStack_334 = (undefined1 *)(unaff_EBP + -0xbc);
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          puStack_338 = (undefined4 *)0x4912ba;
          FUN_007d4a9a();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          FUN_00449749();
          puStack_334 = (undefined1 *)0x4912d0;
          puStack_338 = (undefined4 *)FUN_00449713();
          *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_334;
          iStack_33c = 0x4912dc;
          puStack_334 = extraout_ECX_04;
          FUN_00448a17();
          puStack_338 = (undefined4 *)(*(int *)(unaff_EBP + -0x44) + 6);
          iStack_33c = *(int *)(unaff_EBP + -0x48) + 0x52;
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          puStack_340 = (undefined1 *)0x4912f6;
          FUN_004115d9();
          puStack_340 = (undefined1 *)0x4912fd;
          FUN_00448e3a();
          FUN_004497b5();
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          piStack_32c = (int *)0x491318;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_32c = (int *)0x491323;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          piStack_32c = (int *)0x491333;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_32c = (int *)0x49133e;
            FUN_00878dfb();
          }
          iVar2 = FUN_00492e66();
          if ((iVar2 == 0) && (*(int *)(*(int *)(iVar1 + 0x210) + 0x500) != 9)) {
            iVar1 = *(int *)(unaff_EBP + -0x30);
            if ((*(int *)(iVar1 + 0x58) < 1) && (*(int *)(iVar1 + 0x44) < 0)) {
LAB_004913a4:
              if (*(int *)(iVar1 + 0x48) == 0) goto LAB_004913be;
            }
            else if (*(int *)(iVar1 + 0x48) == 0) {
              piStack_32c = *(int **)(unaff_EBP + -0x44);
              puStack_334 = (undefined1 *)0x4913a1;
              FUN_00492f21();
              iVar1 = *(int *)(unaff_EBP + -0x30);
              goto LAB_004913a4;
            }
            piStack_32c = (int *)(*(int *)(unaff_EBP + -0x48) + 3);
            FUN_004931e2();
          }
LAB_004913be:
          *(undefined4 *)(unaff_EBP + -0xec) = 0;
          *(undefined4 *)(unaff_EBP + -0xe8) = 0;
          *(undefined4 *)(unaff_EBP + -0xe4) = 0;
          *(undefined ***)(unaff_EBP + -0xf4) = &PTR_FUN_008e8ab0;
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          piStack_32c = (int *)0x4913f3;
          FUN_0054eb9b();
          piVar7 = *(int **)(unaff_EBP + -0xe8);
          while (piVar7 != (int *)0x0) {
            iVar1 = *piVar7;
            iVar2 = *(int *)((-(uint)(piVar7 != (int *)0x0) & (uint)(piVar7 + -4)) + 4);
            piVar7 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
            *(int **)(unaff_EBP + -0x24) = piVar7;
            iVar2 = FUN_0045e2eb();
            if (iVar2 == iVar1) {
              piStack_32c = (int *)0x491443;
              FUN_00403191();
              *(undefined1 *)(unaff_EBP + -4) = 0x18;
              piStack_32c = (int *)0x491453;
              FUN_00403191();
              piStack_32c = (int *)0x0;
              puStack_334 = (undefined1 *)(unaff_EBP + -0x274);
              puStack_340 = (undefined1 *)&puStack_338;
              *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_338;
              iStack_33c = 0xbf3;
              *(undefined1 *)(unaff_EBP + -4) = 0x19;
              piStack_344 = (int *)0x49147d;
              FUN_00679e4e();
              iStack_33c = unaff_EBP + -0x2ac;
              *(undefined1 *)(unaff_EBP + -4) = 0x19;
              puStack_340 = (undefined1 *)0x49148d;
              FUN_00405a1d();
              puStack_340 = (undefined1 *)0x491494;
              FUN_00402660();
              puStack_340 = (undefined1 *)0x49149b;
              FUN_00404a02();
              *(undefined1 *)(unaff_EBP + -4) = 0x1b;
              iVar1 = FUN_004032b4();
              *(int *)(unaff_EBP + -0xd0) = iVar1;
              *(undefined4 *)(unaff_EBP + -0x60) = 0;
              if (iVar1 != 0) {
                piStack_32c = (int *)0x4914c2;
                iVar1 = FUN_0041a581();
                if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
                  piStack_32c = (int *)0x4914d3;
                  FUN_00878dfb();
                }
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x1f;
              piStack_32c = (int *)0x4914e3;
              iVar1 = FUN_00402bc3();
              if (iVar1 < 0) {
                piStack_32c = (int *)0x4914ee;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x1e;
              piStack_32c = (int *)0x4914fe;
              iVar1 = FUN_00402bc3();
              if (iVar1 < 0) {
                piStack_32c = (int *)0x491509;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x1d;
              piStack_32c = (int *)0x491519;
              iVar1 = FUN_00402bc3();
              if (iVar1 < 0) {
                piStack_32c = (int *)0x491524;
                FUN_00878dfb();
              }
              piStack_32c = (int *)0xff;
              FUN_004031b7();
              piVar7 = *(int **)(unaff_EBP + 8);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              if (piVar7 == (int *)0x0) {
                piStack_32c = (int *)0x49154b;
                FUN_00878dfb();
                piVar7 = *(int **)(unaff_EBP + 8);
              }
              puStack_338 = *(undefined4 **)(unaff_EBP + -0x60);
              puStack_334 = *(undefined1 **)(unaff_EBP + -0x164);
              iStack_33c = *(int *)(unaff_EBP + -0x44) + 0x36;
              puStack_340 = (undefined1 *)(*(int *)(unaff_EBP + -0x48) + 8);
              piStack_32c = *(int **)(unaff_EBP + -0x15c);
              piStack_344 = *(int **)(unaff_EBP + 8);
              *(int **)(unaff_EBP + -0x10) = piVar7;
              puStack_348 = (undefined *)0x49157c;
              iVar1 = (**(code **)(*piVar7 + 0x80))();
              if (iVar1 < 0) {
                piStack_32c = *(int **)(unaff_EBP + -0x10);
                puStack_334 = (undefined1 *)0x49158e;
                FUN_00878e09();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x1d;
              piStack_32c = (int *)0x49159e;
              iVar1 = FUN_00402bc3();
              if (iVar1 < 0) {
                piStack_32c = (int *)0x4915a9;
                FUN_00878dfb();
              }
              *(undefined4 *)(unaff_EBP + -0x14) = 1;
              *(undefined1 *)(unaff_EBP + -4) = 0x17;
              FUN_004125e6();
              piVar7 = *(int **)(unaff_EBP + -0x24);
            }
          }
          uVar8 = 0;
          while( true ) {
            iVar1 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x720);
            if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) <= uVar8)) goto LAB_004917fb;
            iVar1 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x720);
            iVar2 = FUN_0045e2eb();
            if (iVar2 == *(int *)(iVar1 + uVar8 * 4)) break;
            uVar8 = uVar8 + 1;
          }
          piStack_32c = (int *)0x49160f;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          piStack_32c = (int *)0x49161f;
          FUN_00403191();
          piStack_32c = (int *)0x0;
          puStack_334 = (undefined1 *)(unaff_EBP + -0x234);
          puStack_340 = (undefined1 *)&puStack_338;
          *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_338;
          iStack_33c = 0xbf2;
          *(undefined1 *)(unaff_EBP + -4) = 0x22;
          piStack_344 = (int *)0x491649;
          FUN_00679e4e();
          iStack_33c = unaff_EBP + -0x2ec;
          *(undefined1 *)(unaff_EBP + -4) = 0x22;
          puStack_340 = (undefined1 *)0x491659;
          FUN_00405a1d();
          puStack_340 = (undefined1 *)0x491660;
          FUN_00402660();
          puStack_340 = (undefined1 *)0x491667;
          FUN_00404a02();
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          iVar1 = FUN_004032b4();
          *(int *)(unaff_EBP + -0xcc) = iVar1;
          *(undefined4 *)(unaff_EBP + -0x4c) = 0;
          if (iVar1 != 0) {
            piStack_32c = (int *)0x49168e;
            iVar1 = FUN_0041a581();
            if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
              piStack_32c = (int *)0x49169f;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          piStack_32c = (int *)0x4916af;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            piStack_32c = (int *)0x4916ba;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          piStack_32c = (int *)0x4916ca;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            piStack_32c = (int *)0x4916d5;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          piStack_32c = (int *)0x4916e5;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            piStack_32c = (int *)0x4916f0;
            FUN_00878dfb();
          }
          piStack_32c = (int *)0xff;
          if (*(int *)(unaff_EBP + -0x14) == 1) {
            FUN_004031b7();
            piVar7 = *(int **)(unaff_EBP + 8);
            *(undefined1 *)(unaff_EBP + -4) = 0x29;
            if (piVar7 == (int *)0x0) {
              piStack_32c = (int *)0x49171d;
              FUN_00878dfb();
              piVar7 = *(int **)(unaff_EBP + 8);
            }
            puStack_338 = *(undefined4 **)(unaff_EBP + -0x4c);
            puStack_334 = *(undefined1 **)(unaff_EBP + -500);
            iStack_33c = *(int *)(unaff_EBP + -0x44) + 0x36;
            puStack_340 = (undefined1 *)(*(int *)(unaff_EBP + -0x48) + 0x1a);
            piStack_32c = *(int **)(unaff_EBP + -0x1ec);
            piStack_344 = *(int **)(unaff_EBP + 8);
            *(int **)(unaff_EBP + -0x10) = piVar7;
            puStack_348 = (undefined *)0x49174e;
            iVar1 = (**(code **)(*piVar7 + 0x80))();
            if (iVar1 < 0) {
              piStack_32c = *(int **)(unaff_EBP + -0x10);
              puStack_334 = (undefined1 *)0x491760;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
          }
          else {
            FUN_004031b7();
            piVar7 = *(int **)(unaff_EBP + 8);
            *(undefined1 *)(unaff_EBP + -4) = 0x2a;
            if (piVar7 == (int *)0x0) {
              piStack_32c = (int *)0x49178c;
              FUN_00878dfb();
              piVar7 = *(int **)(unaff_EBP + 8);
            }
            puStack_338 = *(undefined4 **)(unaff_EBP + -0x4c);
            puStack_334 = *(undefined1 **)(unaff_EBP + -0x1a4);
            iStack_33c = *(int *)(unaff_EBP + -0x44) + 0x36;
            puStack_340 = (undefined1 *)(*(int *)(unaff_EBP + -0x48) + 8);
            piStack_32c = *(int **)(unaff_EBP + -0x19c);
            piStack_344 = *(int **)(unaff_EBP + 8);
            *(int **)(unaff_EBP + -0x10) = piVar7;
            puStack_348 = (undefined *)0x4917bd;
            iVar1 = (**(code **)(*piVar7 + 0x80))();
            if (iVar1 < 0) {
              piStack_32c = *(int **)(unaff_EBP + -0x10);
              puStack_334 = (undefined1 *)0x4917cf;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
          }
          piStack_32c = (int *)0x4917df;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            piStack_32c = (int *)0x4917ea;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
            piStack_32c = (int *)0x4917fb;
            (**(code **)(**(int **)(unaff_EBP + -0x4c) + 8))();
          }
LAB_004917fb:
          piStack_32c = (int *)&LAB_00450362;
          puStack_334 = (undefined1 *)0x4;
          puStack_338 = (undefined4 *)(unaff_EBP + -0x6c);
          iStack_33c = 0x491812;
          FUN_0087b2f0();
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          do {
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
            piStack_32c = (int *)(unaff_EBP + -0xc0);
            *(undefined1 *)(unaff_EBP + -4) = 0x2c;
            piVar7 = (int *)FUN_00679e4e();
            puVar3 = (undefined4 *)*piVar7;
            *(undefined1 *)(unaff_EBP + -4) = 0x2d;
            if (puVar3 == (undefined4 *)0x0) {
              piStack_32c = (int *)0x0;
            }
            else {
              piStack_32c = (int *)*puVar3;
            }
            puStack_334 = (undefined1 *)0x491857;
            FUN_0041354c();
            *(undefined1 *)(unaff_EBP + -4) = 0x2c;
            FUN_00402fa6();
            piStack_32c = (int *)0x491875;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 0x2e;
            piStack_32c = (int *)0x491885;
            FUN_00403191();
            piStack_32c = (int *)0x0;
            puStack_334 = (undefined1 *)(unaff_EBP + -0x204);
            *(undefined1 *)(unaff_EBP + -4) = 0x2f;
            puStack_338 = (undefined4 *)0x4918a1;
            iStack_33c = FUN_00411641();
            *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_338;
            puStack_340 = (undefined1 *)0x4918ad;
            puStack_338 = extraout_ECX_05;
            FUN_004033a1();
            iStack_33c = unaff_EBP + -0x30c;
            *(undefined1 *)(unaff_EBP + -4) = 0x2f;
            puStack_340 = (undefined1 *)0x4918bd;
            FUN_00405a1d();
            puStack_340 = (undefined1 *)0x4918c4;
            FUN_00402660();
            puStack_340 = (undefined1 *)0x4918cb;
            FUN_00404a02();
            *(undefined1 *)(unaff_EBP + -4) = 0x31;
            uVar4 = FUN_004032b4();
            *(undefined4 *)(unaff_EBP + -0x98) = uVar4;
            piStack_32c = (int *)0x4918ea;
            iVar1 = FUN_0041a581();
            if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
              piStack_32c = (int *)0x4918fb;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2f;
            piStack_32c = (int *)0x49190b;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              piStack_32c = (int *)0x491916;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2e;
            piStack_32c = (int *)0x491926;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              piStack_32c = (int *)0x491931;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2c;
            piStack_32c = (int *)0x491941;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              piStack_32c = (int *)0x49194c;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            FUN_00402676();
            *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
          } while (*(int *)(unaff_EBP + -0x24) < 2);
          *(int ***)(unaff_EBP + -0x1c) = &piStack_32c;
          if (*(int *)(unaff_EBP + -0x30) != 0) {
            puStack_334 = (undefined1 *)0x491986;
            InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x30) + 4));
          }
          iVar1 = FUN_004945b5();
          if (iVar1 == 0) {
            piStack_32c = (int *)0xff;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x32;
            if (*(int *)(unaff_EBP + 8) == 0) {
              piStack_32c = (int *)0x491a2b;
              FUN_00878dfb();
            }
            piVar7 = *(int **)(unaff_EBP + 8);
            puStack_338 = *(undefined4 **)(unaff_EBP + -0x6c);
            puStack_334 = *(undefined1 **)(unaff_EBP + -0x1e4);
            iStack_33c = *(int *)(unaff_EBP + -0x44) + 0x3a;
            puStack_340 = (undefined1 *)(*(int *)(unaff_EBP + -0x48) + 0x39);
            piStack_32c = *(int **)(unaff_EBP + -0x1dc);
            puStack_348 = (undefined *)0x491a57;
            piStack_344 = piVar7;
            iVar1 = (**(code **)(*piVar7 + 0x80))();
            if (iVar1 < 0) {
              puStack_334 = (undefined1 *)0x491a67;
              piStack_32c = piVar7;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
LAB_00491a71:
            piStack_32c = (int *)0x491a77;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              piStack_32c = (int *)0x491a82;
              FUN_00878dfb();
            }
          }
          else if (iVar1 == 1) {
            piStack_32c = (int *)0xff;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x33;
            if (*(int *)(unaff_EBP + 8) == 0) {
              piStack_32c = (int *)0x4919be;
              FUN_00878dfb();
            }
            piVar7 = *(int **)(unaff_EBP + 8);
            puStack_338 = *(undefined4 **)(unaff_EBP + -0x68);
            puStack_334 = *(undefined1 **)(unaff_EBP + -0x224);
            iStack_33c = *(int *)(unaff_EBP + -0x44) + 0x3a;
            puStack_340 = (undefined1 *)(*(int *)(unaff_EBP + -0x48) + 0x39);
            piStack_32c = *(int **)(unaff_EBP + -0x21c);
            puStack_348 = (undefined *)0x4919ea;
            piStack_344 = piVar7;
            iVar1 = (**(code **)(*piVar7 + 0x80))();
            if (iVar1 < 0) {
              puStack_334 = (undefined1 *)0x4919fa;
              piStack_32c = piVar7;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            goto LAB_00491a71;
          }
          iVar1 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x1e8 + *(int *)(unaff_EBP + -0x2c) * 4);
          *(int *)(unaff_EBP + -0x24) =
               *(int *)(unaff_EBP + -0x20) + 0x1e8 + *(int *)(unaff_EBP + -0x2c) * 4;
          if (iVar1 != 0) {
            piStack_32c = (int *)0xff;
            FUN_004031b7();
            piVar7 = *(int **)(unaff_EBP + 8);
            puVar3 = *(undefined4 **)(*(int *)(unaff_EBP + -0x20) + 0x224);
            *(undefined1 *)(unaff_EBP + -4) = 0x34;
            if (piVar7 == (int *)0x0) {
              piStack_32c = (int *)0x491ad0;
              FUN_00878dfb();
              piVar7 = *(int **)(unaff_EBP + 8);
            }
            puStack_334 = *(undefined1 **)(unaff_EBP + -0x244);
            iStack_33c = *(int *)(unaff_EBP + -0x44) + 0x1f;
            puStack_340 = (undefined1 *)(*(int *)(unaff_EBP + -0x48) + 0x52);
            piStack_32c = *(int **)(unaff_EBP + -0x23c);
            piStack_344 = *(int **)(unaff_EBP + 8);
            *(int **)(unaff_EBP + -0x10) = piVar7;
            puStack_348 = (undefined *)0x491aff;
            puStack_338 = puVar3;
            iVar1 = (**(code **)(*piVar7 + 0x80))();
            if (iVar1 < 0) {
              piStack_32c = *(int **)(unaff_EBP + -0x10);
              puStack_334 = (undefined1 *)0x491b11;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            piStack_32c = (int *)0x491b21;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              piStack_32c = (int *)0x491b2c;
              FUN_00878dfb();
            }
          }
          iVar1 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x1c0 + *(int *)(unaff_EBP + -0x2c) * 4);
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          if (iVar1 == 1) {
            piStack_32c = (int *)0xff;
            FUN_004031b7();
            piVar7 = *(int **)(unaff_EBP + 8);
            puVar3 = *(undefined4 **)(*(int *)(unaff_EBP + -0x20) + 0x218);
            *(undefined1 *)(unaff_EBP + -4) = 0x35;
            if (piVar7 == (int *)0x0) {
              piStack_32c = (int *)0x491ff8;
              FUN_00878dfb();
              piVar7 = *(int **)(unaff_EBP + 8);
            }
            puStack_334 = *(undefined1 **)(unaff_EBP + -0x144);
            iStack_33c = *(int *)(unaff_EBP + -0x44) + 0x1f;
            puStack_340 = (undefined1 *)(*(int *)(unaff_EBP + -0x48) + 0x52);
            piStack_32c = *(int **)(unaff_EBP + -0x13c);
            piStack_344 = *(int **)(unaff_EBP + 8);
            *(int **)(unaff_EBP + -0x10) = piVar7;
            puStack_348 = (undefined *)0x492027;
            puStack_338 = puVar3;
            iVar1 = (**(code **)(*piVar7 + 0x80))();
            if (iVar1 < 0) {
              piStack_32c = *(int **)(unaff_EBP + -0x10);
              puStack_334 = (undefined1 *)0x492039;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
LAB_00492043:
            piStack_32c = (int *)0x492049;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              piStack_32c = (int *)0x492054;
              FUN_00878dfb();
            }
          }
          else {
            if (iVar1 == 2) {
              piStack_32c = (int *)0xff;
              FUN_004031b7();
              piVar7 = *(int **)(unaff_EBP + 8);
              puVar3 = *(undefined4 **)(*(int *)(unaff_EBP + -0x20) + 0x21c);
              *(undefined1 *)(unaff_EBP + -4) = 0x36;
              if (piVar7 == (int *)0x0) {
                piStack_32c = (int *)0x491f7b;
                FUN_00878dfb();
                piVar7 = *(int **)(unaff_EBP + 8);
              }
              puStack_334 = *(undefined1 **)(unaff_EBP + -0x214);
              iStack_33c = *(int *)(unaff_EBP + -0x44) + 0x1f;
              puStack_340 = (undefined1 *)(*(int *)(unaff_EBP + -0x48) + 0x52);
              piStack_32c = *(int **)(unaff_EBP + -0x20c);
              piStack_344 = *(int **)(unaff_EBP + 8);
              *(int **)(unaff_EBP + -0x10) = piVar7;
              puStack_348 = (undefined *)0x491faa;
              puStack_338 = puVar3;
              iVar1 = (**(code **)(*piVar7 + 0x80))();
              if (iVar1 < 0) {
                piStack_32c = *(int **)(unaff_EBP + -0x10);
                puStack_334 = (undefined1 *)0x491fbc;
                FUN_00878e09();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x2b;
              goto LAB_00492043;
            }
            if (*(int *)(*(int *)(unaff_EBP + -0x30) + 0x40) == 0) {
              piStack_32c = (int *)0xff;
              FUN_004031b7();
              piVar7 = *(int **)(unaff_EBP + 8);
              puVar3 = *(undefined4 **)(*(int *)(unaff_EBP + -0x20) + 0x220);
              *(undefined1 *)(unaff_EBP + -4) = 0x37;
              if (piVar7 == (int *)0x0) {
                piStack_32c = (int *)0x491b88;
                FUN_00878dfb();
                piVar7 = *(int **)(unaff_EBP + 8);
              }
              puStack_334 = *(undefined1 **)(unaff_EBP + -0x264);
              iStack_33c = *(int *)(unaff_EBP + -0x44) + 0x20;
              puStack_340 = (undefined1 *)(*(int *)(unaff_EBP + -0x48) + 0x4f);
              piStack_32c = *(int **)(unaff_EBP + -0x25c);
              piStack_344 = *(int **)(unaff_EBP + 8);
              *(int **)(unaff_EBP + -0x10) = piVar7;
              puStack_348 = (undefined *)0x491bb7;
              puStack_338 = puVar3;
              iVar1 = (**(code **)(*piVar7 + 0x80))();
              if (iVar1 < 0) {
                piStack_32c = *(int **)(unaff_EBP + -0x10);
                puStack_334 = (undefined1 *)0x491bc9;
                FUN_00878e09();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x2b;
              goto LAB_00492043;
            }
            if (**(int **)(unaff_EBP + -0x24) == 0) {
              *(undefined4 *)(unaff_EBP + -0x54) = 0;
              piStack_32c = *(int **)(*(int *)(unaff_EBP + -0x30) + 0x20);
              *(undefined1 *)(unaff_EBP + -4) = 0x38;
              puStack_334 = (undefined1 *)0x491bfb;
              FUN_007d3546();
              iVar1 = *(int *)(*(int *)(unaff_EBP + -0x30) + 0xc);
              if ((iVar1 < 80000000) || (89999999 < iVar1)) {
                piStack_32c = (int *)(unaff_EBP + -0xa8);
                puVar3 = (undefined4 *)FUN_00679d22();
                *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) | 2;
                *(undefined4 *)(unaff_EBP + -4) = 0x3a;
              }
              else {
                piStack_32c = (int *)(unaff_EBP + -0xa0);
                puVar3 = (undefined4 *)FUN_00679d22();
                *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) | 1;
                *(undefined1 *)(unaff_EBP + -4) = 0x39;
              }
              piStack_32c = (int *)*puVar3;
              FUN_0045efbb();
              *(undefined4 *)(unaff_EBP + -4) = 0x39;
              if ((*(byte *)(unaff_EBP + -0x18) & 2) != 0) {
                *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffd;
                FUN_00414ebb();
              }
              *(undefined4 *)(unaff_EBP + -4) = 0x38;
              if ((*(byte *)(unaff_EBP + -0x18) & 1) != 0) {
                *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
                FUN_00414ebb();
              }
              iVar1 = *(int *)(unaff_EBP + -0x30);
              if (1 < *(int *)(iVar1 + 0x1c)) {
                *(undefined4 *)(unaff_EBP + -0x14) = 0;
                piStack_32c = (int *)(unaff_EBP + -0xac);
                *(undefined1 *)(unaff_EBP + -4) = 0x3b;
                puVar3 = (undefined4 *)FUN_00679d22();
                piStack_32c = (int *)*puVar3;
                *(undefined1 *)(unaff_EBP + -4) = 0x3c;
                puStack_334 = (undefined1 *)0x491cdf;
                FUN_00434e21();
                *(undefined1 *)(unaff_EBP + -4) = 0x3b;
                FUN_00414ebb();
                piStack_32c = *(int **)(unaff_EBP + -0x14);
                FUN_0045efbb();
                *(undefined1 *)(unaff_EBP + -4) = 0x38;
                FUN_00414ebb();
                iVar1 = *(int *)(unaff_EBP + -0x30);
              }
              iVar2 = *(int *)(iVar1 + 0x58);
              if (((iVar2 == 0) && (*(int *)(iVar1 + 0x20) < *(int *)(iVar1 + 100))) ||
                 ((0 < iVar2 &&
                  (*(int *)(iVar1 + 0x20) < (*(int *)(iVar1 + 100) * (100 - iVar2)) / 100)))) {
                *(undefined4 *)(unaff_EBP + -0x14) = 1;
              }
              else {
                *(undefined4 *)(unaff_EBP + -0x14) = 0;
              }
              if ((*(int *)(iVar1 + 0xc) < 80000000) || (89999999 < *(int *)(iVar1 + 0xc))) {
                piStack_32c = (int *)(unaff_EBP + -0x90);
                piVar7 = (int *)FUN_007d4a9a();
                *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) | 8;
                *(undefined4 *)(unaff_EBP + -4) = 0x3e;
              }
              else {
                piStack_32c = (int *)(unaff_EBP + -0xb4);
                piVar7 = (int *)FUN_007d4a9a();
                *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) | 4;
                *(undefined1 *)(unaff_EBP + -4) = 0x3d;
              }
              piVar7 = (int *)*piVar7;
              *(int **)(unaff_EBP + -100) = piVar7;
              if (piVar7 != (int *)0x0) {
                piStack_32c = (int *)0x491d9f;
                (**(code **)(*piVar7 + 4))();
              }
              *(undefined4 *)(unaff_EBP + -4) = 0x41;
              if ((*(byte *)(unaff_EBP + -0x18) & 8) != 0) {
                *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffff7;
                if (*(int **)(unaff_EBP + -0x90) != (int *)0x0) {
                  piStack_32c = (int *)0x491dc0;
                  (**(code **)(**(int **)(unaff_EBP + -0x90) + 8))();
                }
              }
              *(undefined4 *)(unaff_EBP + -4) = 0x40;
              if ((*(byte *)(unaff_EBP + -0x18) & 4) != 0) {
                *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffb;
                if (*(int **)(unaff_EBP + -0xb4) != (int *)0x0) {
                  piStack_32c = (int *)0x491de1;
                  (**(code **)(**(int **)(unaff_EBP + -0xb4) + 8))();
                }
              }
              piStack_32c = (int *)0x491df0;
              VariantInit((VARIANTARG *)(unaff_EBP + -0x114));
              piStack_32c = (int *)(unaff_EBP + -0x114);
              iVar1 = FUN_00402e32();
              if (iVar1 < 0) {
                piStack_32c = (int *)0x491e0e;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x42;
              piStack_32c = (int *)0x491e1b;
              VariantInit((VARIANTARG *)(unaff_EBP + -0x124));
              piStack_32c = (int *)(unaff_EBP + -0x124);
              iVar1 = FUN_00402e32();
              if (iVar1 < 0) {
                piStack_32c = (int *)0x491e34;
                FUN_00878dfb();
              }
              piStack_32c = (int *)(unaff_EBP + -0x124);
              *(undefined1 *)(unaff_EBP + -4) = 0x43;
              FUN_00449749();
              puStack_334 = (undefined1 *)0x491e57;
              puStack_338 = (undefined4 *)FUN_00449713();
              *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_334;
              iStack_33c = 0x491e63;
              FUN_00448a17();
              puStack_338 = (undefined4 *)(*(int *)(unaff_EBP + -0x44) + 0x20);
              iStack_33c = *(int *)(unaff_EBP + -0x48) + 0x4e;
              *(undefined1 *)(unaff_EBP + -4) = 0x43;
              puStack_340 = (undefined1 *)0x491e7d;
              FUN_004115d9();
              puStack_340 = (undefined1 *)0x491e84;
              FUN_00448e3a();
              *(undefined1 *)(unaff_EBP + -4) = 0x42;
              piStack_32c = (int *)0x491e94;
              iVar1 = FUN_00402bc3();
              if (iVar1 < 0) {
                piStack_32c = (int *)0x491e9f;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x40;
              piStack_32c = (int *)0x491eaf;
              iVar1 = FUN_00402bc3();
              if (iVar1 < 0) {
                piStack_32c = (int *)0x491eba;
                FUN_00878dfb();
              }
              piStack_32c = (int *)0x491ec3;
              VariantInit((VARIANTARG *)(unaff_EBP + -0xe0));
              piStack_32c = (int *)(unaff_EBP + -0xe0);
              iVar1 = FUN_00402e32();
              if (iVar1 < 0) {
                piStack_32c = (int *)0x491edc;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x45;
              piStack_32c = (int *)0x491eef;
              FUN_00449713();
              *(int ***)(unaff_EBP + -0x1c) = &piStack_32c;
              puStack_334 = (undefined1 *)0x491efb;
              FUN_00448a17();
              *(undefined1 *)(unaff_EBP + -4) = 0x45;
              FUN_0044974c();
              FUN_00448ebb();
              *(undefined1 *)(unaff_EBP + -4) = 0x40;
              piStack_32c = (int *)0x491f1e;
              iVar1 = FUN_00402bc3();
              if (iVar1 < 0) {
                piStack_32c = (int *)0x491f29;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x38;
              if (*(int **)(unaff_EBP + -100) != (int *)0x0) {
                piStack_32c = (int *)0x491f3a;
                (**(code **)(**(int **)(unaff_EBP + -100) + 8))();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x2b;
              FUN_00414ebb();
            }
          }
          if ((0 < *(int *)(*(int *)(unaff_EBP + -0x30) + 0x58)) ||
             (*(int *)(unaff_EBP + -0x14) != 0)) {
            piStack_32c = (int *)0x492076;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
            piStack_32c = (int *)(unaff_EBP + -0x8c);
            iVar1 = FUN_00402e32();
            if (iVar1 < 0) {
              piStack_32c = (int *)0x492094;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x47;
            piStack_32c = (int *)0x49209e;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
            piStack_32c = (int *)(unaff_EBP + -0x7c);
            puVar3 = &DAT_00980690;
            iVar1 = FUN_00402e32();
            if (iVar1 < 0) {
              piStack_32c = (int *)0x4920b4;
              FUN_00878dfb();
              puVar3 = extraout_ECX_06;
            }
            piStack_32c = (int *)0x0;
            puStack_334 = (undefined1 *)(unaff_EBP + -0x7c);
            puStack_340 = (undefined1 *)&puStack_338;
            *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_338;
            iStack_33c = 0xaf8;
            *(undefined1 *)(unaff_EBP + -4) = 0x48;
            piStack_344 = (int *)0x4920dd;
            puStack_338 = puVar3;
            FUN_00679e4e();
            iStack_33c = unaff_EBP + -0x2fc;
            *(undefined1 *)(unaff_EBP + -4) = 0x48;
            puStack_340 = (undefined1 *)0x4920ed;
            FUN_00405a1d();
            puStack_340 = (undefined1 *)0x4920f4;
            FUN_00402660();
            puStack_340 = (undefined1 *)0x4920fb;
            FUN_00404a02();
            *(undefined1 *)(unaff_EBP + -4) = 0x4a;
            iVar1 = FUN_004032b4();
            *(int *)(unaff_EBP + -0xb0) = iVar1;
            *(undefined4 *)(unaff_EBP + -0x38) = 0;
            if (iVar1 != 0) {
              piStack_32c = (int *)0x492122;
              iVar1 = FUN_00404b30();
              if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
                piStack_32c = (int *)0x492133;
                FUN_00878dfb();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x4e;
            piStack_32c = (int *)0x492143;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              piStack_32c = (int *)0x49214e;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x4d;
            piStack_32c = (int *)0x49215b;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              piStack_32c = (int *)0x492166;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x4c;
            piStack_32c = (int *)0x492176;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              piStack_32c = (int *)0x492181;
              FUN_00878dfb();
            }
            piStack_32c = (int *)0x0;
            puStack_338 = (undefined4 *)&stack0xfffffcd0;
            *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xfffffcd0;
            puStack_334 = (undefined1 *)0x578;
            iStack_33c = 0x492196;
            FUN_00679e4e();
            puStack_334 = (undefined1 *)(unaff_EBP + -0x2dc);
            *(undefined1 *)(unaff_EBP + -4) = 0x4c;
            puStack_338 = (undefined4 *)0x4921a9;
            FUN_0040263d();
            puStack_338 = (undefined4 *)0x4921b0;
            FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x50;
            iVar1 = FUN_004032b4();
            *(int *)(unaff_EBP + -0xc4) = iVar1;
            *(undefined4 *)(unaff_EBP + -0x58) = 0;
            if (iVar1 != 0) {
              piStack_32c = (int *)0x4921d7;
              iVar1 = FUN_0041a581();
              if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
                piStack_32c = (int *)0x4921e8;
                FUN_00878dfb();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x52;
            piStack_32c = (int *)0x4921f8;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              piStack_32c = (int *)0x492203;
              FUN_00878dfb();
            }
            piStack_32c = (int *)&LAB_00450362;
            puStack_334 = (undefined1 *)0x4;
            puStack_338 = (undefined4 *)(unaff_EBP + -0x29c);
            iStack_33c = 0x49221d;
            FUN_0087b2f0();
            *(undefined1 *)(unaff_EBP + -4) = 0x53;
            puVar6 = (undefined1 *)0x0;
            do {
              FUN_0087a1b0();
              piStack_32c = (int *)0x0;
              puStack_338 = (undefined4 *)0x49223c;
              puStack_334 = puVar6;
              puStack_334 = (undefined1 *)FUN_00412335();
              *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xfffffcd0;
              puStack_338 = (undefined4 *)0x492248;
              FUN_004033a1();
              puStack_334 = (undefined1 *)(unaff_EBP + -700);
              *(undefined1 *)(unaff_EBP + -4) = 0x53;
              puStack_338 = (undefined4 *)0x49225b;
              FUN_0040263d();
              puStack_338 = (undefined4 *)0x492262;
              FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x55;
              uVar4 = FUN_004032b4();
              *(undefined4 *)(unaff_EBP + -0xb8) = uVar4;
              piStack_32c = (int *)0x492281;
              iVar1 = FUN_0041a581();
              if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
                piStack_32c = (int *)0x492292;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x53;
              piStack_32c = (int *)0x4922a2;
              iVar1 = FUN_00402bc3();
              if (iVar1 < 0) {
                piStack_32c = (int *)0x4922ad;
                FUN_00878dfb();
              }
              puVar6 = puVar6 + 1;
            } while ((int)puVar6 < 10);
            piStack_32c = (int *)0x0;
            puStack_338 = (undefined4 *)&stack0xfffffcd0;
            *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xfffffcd0;
            puStack_334 = (undefined1 *)0x577;
            iStack_33c = 0x4922d2;
            FUN_00679e4e();
            puStack_334 = (undefined1 *)(unaff_EBP + -0x2cc);
            *(undefined1 *)(unaff_EBP + -4) = 0x53;
            puStack_338 = (undefined4 *)0x4922e5;
            FUN_0040263d();
            puStack_338 = (undefined4 *)0x4922ec;
            FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x57;
            iVar1 = FUN_004032b4();
            *(int *)(unaff_EBP + -200) = iVar1;
            *(undefined4 *)(unaff_EBP + -0x5c) = 0;
            if (iVar1 != 0) {
              piStack_32c = (int *)0x492313;
              iVar1 = FUN_0041a581();
              if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
                piStack_32c = (int *)0x492324;
                FUN_00878dfb();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x59;
            piStack_32c = (int *)0x492334;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              piStack_32c = (int *)0x49233f;
              FUN_00878dfb();
            }
            iVar1 = *(int *)(*(int *)(unaff_EBP + -0x30) + 0x58);
            if (iVar1 < 1) {
              uVar4 = __ftol();
              *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
            }
            else {
              *(int *)(unaff_EBP + -0x24) = iVar1;
            }
            *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x48) + 0x2c;
            iVar1 = *(int *)(unaff_EBP + -0x44) + 0x40;
            piStack_32c = (int *)0xff;
            *(int *)(unaff_EBP + -0x14) = iVar1;
            FUN_004031b7();
            piVar7 = *(int **)(unaff_EBP + 8);
            *(undefined1 *)(unaff_EBP + -4) = 0x5a;
            if (piVar7 == (int *)0x0) {
              piStack_32c = (int *)0x4923a1;
              FUN_00878dfb();
              piVar7 = *(int **)(unaff_EBP + 8);
            }
            iVar2 = *piVar7;
            puStack_338 = *(undefined4 **)(unaff_EBP + -0x58);
            puStack_334 = *(undefined1 **)(unaff_EBP + -0x154);
            puStack_340 = *(undefined1 **)(unaff_EBP + -0x28);
            piStack_32c = *(int **)(unaff_EBP + -0x14c);
            *(int **)(unaff_EBP + -0x10) = piVar7;
            puStack_348 = (undefined *)0x4923c6;
            piStack_344 = piVar7;
            iStack_33c = iVar1;
            iVar1 = (**(code **)(iVar2 + 0x80))();
            if (iVar1 < 0) {
              puStack_348 = &DAT_00963cc8;
              uStack_34c = *(undefined4 *)(unaff_EBP + -0x10);
              FUN_00878e09(iVar1);
            }
            puStack_348 = (undefined *)(unaff_EBP + -0x154);
            *(undefined1 *)(unaff_EBP + -4) = 0x59;
            uStack_34c = 0x4923e8;
            puStack_348 = (undefined *)FUN_00402bc3();
            if ((int)puStack_348 < 0) {
              uStack_34c = 0x4923f3;
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + -0x58) == 0) {
              puStack_348 = (undefined *)0x80004003;
              uStack_34c = 0x492403;
              FUN_00878dfb();
            }
            puStack_348 = (undefined *)0x49240b;
            iVar1 = FUN_0040e48b();
            *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + iVar1;
            iVar1 = *(int *)(unaff_EBP + -0x24) / 100;
            *(int *)(unaff_EBP + -0x10) = iVar1;
            if (0 < iVar1) {
              puStack_348 = (undefined *)0x3;
              uStack_34c = 0xff;
              FUN_004031b7();
              uVar4 = *(undefined4 *)(unaff_EBP + -0x29c + *(int *)(unaff_EBP + -0x10) * 4);
              piVar7 = *(int **)(unaff_EBP + 8);
              *(undefined1 *)(unaff_EBP + -4) = 0x5b;
              if (piVar7 == (int *)0x0) {
                puStack_348 = (undefined *)0x80004003;
                uStack_34c = 0x492453;
                FUN_00878dfb();
                piVar7 = *(int **)(unaff_EBP + 8);
              }
              iVar1 = *piVar7;
              uStack_34c = *(undefined4 *)(unaff_EBP + -0x16c);
              *(int **)(unaff_EBP + -0x1c) = piVar7;
              puStack_348 = *(undefined **)(unaff_EBP + -0x168);
              iVar1 = (**(code **)(iVar1 + 0x80))
                                (piVar7,*(undefined4 *)(unaff_EBP + -0x28),
                                 *(undefined4 *)(unaff_EBP + -0x14),uVar4,
                                 *(undefined4 *)(unaff_EBP + -0x174),
                                 *(undefined4 *)(unaff_EBP + -0x170));
              if (iVar1 < 0) {
                puStack_348 = &DAT_00963cc8;
                uStack_34c = *(undefined4 *)(unaff_EBP + -0x1c);
                FUN_00878e09(iVar1);
              }
              puStack_348 = (undefined *)(unaff_EBP + -0x174);
              *(undefined1 *)(unaff_EBP + -4) = 0x59;
              uStack_34c = 0x49249a;
              puStack_348 = (undefined *)FUN_00402bc3();
              if ((int)puStack_348 < 0) {
                uStack_34c = 0x4924a5;
                FUN_00878dfb();
              }
              *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 5;
            }
            if ((0 < *(int *)(unaff_EBP + -0x10)) || (0 < *(int *)(unaff_EBP + -0x24) / 10)) {
              puStack_348 = (undefined *)0x3;
              uStack_34c = 0xff;
              FUN_004031b7();
              *(undefined1 *)(unaff_EBP + -4) = 0x5c;
              uVar4 = *(undefined4 *)
                       (unaff_EBP + -0x29c + ((*(int *)(unaff_EBP + -0x24) % 100) / 10) * 4);
              piVar7 = *(int **)(unaff_EBP + 8);
              if (piVar7 == (int *)0x0) {
                puStack_348 = (undefined *)0x80004003;
                uStack_34c = 0x4924ff;
                FUN_00878dfb();
                piVar7 = *(int **)(unaff_EBP + 8);
              }
              iVar1 = *piVar7;
              uStack_34c = *(undefined4 *)(unaff_EBP + -0x18c);
              *(int **)(unaff_EBP + -0x1c) = piVar7;
              puStack_348 = *(undefined **)(unaff_EBP + -0x188);
              iVar1 = (**(code **)(iVar1 + 0x80))
                                (piVar7,*(undefined4 *)(unaff_EBP + -0x28),
                                 *(undefined4 *)(unaff_EBP + -0x14),uVar4,
                                 *(undefined4 *)(unaff_EBP + -0x194),
                                 *(undefined4 *)(unaff_EBP + -400));
              if (iVar1 < 0) {
                puStack_348 = &DAT_00963cc8;
                uStack_34c = *(undefined4 *)(unaff_EBP + -0x1c);
                FUN_00878e09(iVar1);
              }
              puStack_348 = (undefined *)(unaff_EBP + -0x194);
              *(undefined1 *)(unaff_EBP + -4) = 0x59;
              uStack_34c = 0x492546;
              puStack_348 = (undefined *)FUN_00402bc3();
              if ((int)puStack_348 < 0) {
                uStack_34c = 0x492551;
                FUN_00878dfb();
              }
              *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 5;
            }
            puStack_348 = (undefined *)0x3;
            uStack_34c = 0xff;
            FUN_004031b7();
            piVar7 = *(int **)(unaff_EBP + 8);
            *(undefined1 *)(unaff_EBP + -4) = 0x5d;
            uVar4 = *(undefined4 *)(unaff_EBP + -0x29c + (*(int *)(unaff_EBP + -0x24) % 10) * 4);
            if (piVar7 == (int *)0x0) {
              puStack_348 = (undefined *)0x80004003;
              uStack_34c = 0x49258c;
              FUN_00878dfb();
              piVar7 = *(int **)(unaff_EBP + 8);
            }
            iVar1 = *piVar7;
            uStack_34c = *(undefined4 *)(unaff_EBP + -0x1ac);
            *(int **)(unaff_EBP + -0x1c) = piVar7;
            puStack_348 = *(undefined **)(unaff_EBP + -0x1a8);
            iVar1 = (**(code **)(iVar1 + 0x80))
                              (piVar7,*(undefined4 *)(unaff_EBP + -0x28),
                               *(undefined4 *)(unaff_EBP + -0x14),uVar4,
                               *(undefined4 *)(unaff_EBP + -0x1b4),
                               *(undefined4 *)(unaff_EBP + -0x1b0));
            if (iVar1 < 0) {
              FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963cc8);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x59;
            iVar1 = FUN_00402bc3(unaff_EBP + -0x1b4);
            if (iVar1 < 0) {
              FUN_00878dfb(iVar1);
            }
            *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 5;
            FUN_004031b7(0xff,3);
            *(undefined1 *)(unaff_EBP + -4) = 0x5e;
            if (*(int *)(unaff_EBP + 8) == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar7 = *(int **)(unaff_EBP + 8);
            iVar1 = (**(code **)(*piVar7 + 0x80))
                              (piVar7,*(undefined4 *)(unaff_EBP + -0x28),
                               *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x5c)
                               ,*(undefined4 *)(unaff_EBP + -0x104),
                               *(undefined4 *)(unaff_EBP + -0x100),
                               *(undefined4 *)(unaff_EBP + -0xfc),*(undefined4 *)(unaff_EBP + -0xf8)
                              );
            if (iVar1 < 0) {
              puStack_334 = (undefined1 *)0x49263c;
              piStack_32c = piVar7;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x59;
            piStack_32c = (int *)0x49264c;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              piStack_32c = (int *)0x492657;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x53;
            if (*(int **)(unaff_EBP + -0x5c) != (int *)0x0) {
              piStack_32c = (int *)0x492668;
              (**(code **)(**(int **)(unaff_EBP + -0x5c) + 8))();
            }
            piStack_32c = (int *)0xa;
            puStack_334 = (undefined1 *)(unaff_EBP + -0x29c);
            *(undefined1 *)(unaff_EBP + -4) = 0x52;
            puStack_338 = (undefined4 *)0x492681;
            FUN_0087a0b8();
            *(undefined1 *)(unaff_EBP + -4) = 0x4c;
            if (*(int **)(unaff_EBP + -0x58) != (int *)0x0) {
              piStack_32c = (int *)0x492692;
              (**(code **)(**(int **)(unaff_EBP + -0x58) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
              piStack_32c = (int *)0x4926a3;
              (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
            }
          }
          piStack_32c = (int *)0x2;
          puStack_334 = (undefined1 *)(unaff_EBP + -0x6c);
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          puStack_338 = (undefined4 *)0x4926b9;
          FUN_0087a0b8();
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          *(undefined ***)(unaff_EBP + -0xf4) = &PTR_FUN_008e8ab0;
          FUN_00434e79();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int *)(unaff_EBP + -0x30) != 0) {
            piStack_32c = (int *)0x4926f2;
            FUN_0045e794();
            *(undefined4 *)(unaff_EBP + -0x30) = 0;
          }
        }
      }
      *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
      iVar1 = *(int *)(unaff_EBP + -0x20);
    } while (*(int *)(unaff_EBP + -0x2c) < *(int *)(iVar1 + 0x164));
  }
  iVar1 = *(int *)(unaff_EBP + -0x20);
  *(undefined4 *)(iVar1 + 0x738) = 0;
  iVar2 = *(int *)(iVar1 + 0x210);
  uVar4 = *(undefined4 *)(iVar2 + 0x500);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x724) = uVar4;
  *(undefined4 *)(iVar1 + 0x728) = *(undefined4 *)(iVar2 + 0x504);
  *(undefined4 *)(iVar1 + 0x72c) = *(undefined4 *)(iVar2 + 0x508);
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    piStack_32c = (int *)0x492750;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


