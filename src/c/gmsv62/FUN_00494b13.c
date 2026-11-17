/* FUN_00494b13 - 0x00494b13 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00494b13(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int unaff_EBP;
  int iVar7;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int *piStack_104;
  int iStack_100;
  wchar_t *pwStack_fc;
  int iStack_f8;
  undefined1 *puStack_f4;
  int iStack_f0;
  int *piStack_ec;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x2c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_0081622a();
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + 8);
  iVar2 = (**(code **)(*piVar3 + 0x8c))();
  if (iVar2 < 0) {
    puStack_f4 = (undefined1 *)0x494b80;
    iStack_f0 = iVar2;
    piStack_ec = piVar3;
    FUN_00878e09();
  }
  piStack_ec = (int *)0x494b91;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_ec = (int *)0x494ba1;
  FUN_00403191();
  piStack_ec = (int *)0x0;
  iStack_f0 = unaff_EBP + -0x8c;
  puStack_f4 = (undefined1 *)(unaff_EBP + -0xbc);
  *(int **)(unaff_EBP + -0x34) = &iStack_f8;
  pwStack_fc = u_UI_CashShop_img_CS3thEvent_0_00964d38;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_100 = 0x494bc5;
  iStack_f8 = extraout_ECX_00;
  FUN_004033a1();
  pwStack_fc = (wchar_t *)(unaff_EBP + -0xcc);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_100 = 0x494bd5;
  FUN_00405a1d();
  iStack_100 = 0x494bdc;
  FUN_00402660();
  iStack_100 = 0x494be3;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_f0 = 0x494bee;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x40) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  if (iVar2 != 0) {
    piStack_ec = (int *)0x494c04;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      piStack_ec = (int *)0x494c15;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_ec = (int *)0x494c25;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_ec = (int *)0x494c30;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_ec = (int *)0x494c40;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_ec = (int *)0x494c4b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_ec = (int *)0x494c5b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_ec = (int *)0x494c66;
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x30) = DAT_00978368 + 0x3278;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar2 = extraout_ECX;
  do {
    if ((*(int *)(unaff_EBP + -0x14) == 4) && (*(int *)(*(int *)(iVar2 + 0x78) + 0x4f4) != 0)) {
      piStack_ec = (int *)0x494c98;
      cVar1 = FUN_004115ef();
      if (cVar1 == '\0') {
        piStack_ec = (int *)0xff;
        iStack_f0 = 0x494cb2;
        FUN_004031b7();
        piVar3 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (piVar3 == (int *)0x0) {
          piStack_ec = (int *)0x494cc7;
          FUN_00878dfb();
          piVar3 = *(int **)(unaff_EBP + 8);
        }
        iVar2 = *piVar3;
        iStack_f8 = *(int *)(unaff_EBP + -0x28);
        puStack_f4 = *(undefined1 **)(unaff_EBP + -0x9c);
        iStack_f0 = *(int *)(unaff_EBP + -0x98);
        pwStack_fc = (wchar_t *)0x114;
        piStack_ec = *(int **)(unaff_EBP + -0x94);
        iStack_100 = 6;
        *(int **)(unaff_EBP + -0x18) = piVar3;
        uStack_108 = 0x494cef;
        piStack_104 = piVar3;
        iVar2 = (**(code **)(iVar2 + 0x80))();
        if (iVar2 < 0) {
          piStack_ec = *(int **)(unaff_EBP + -0x18);
          puStack_f4 = (undefined1 *)0x494d01;
          iStack_f0 = iVar2;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        piStack_ec = (int *)0x494d11;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_ec = (int *)0x494d20;
          FUN_00878dfb();
        }
LAB_004950c8:
        iVar2 = *(int *)(unaff_EBP + -0x2c);
      }
    }
    else {
      iVar7 = *(int *)(iVar2 + 100 + *(int *)(unaff_EBP + -0x14) * 4);
      if (-1 < iVar7) {
        iVar7 = iVar7 * 8;
        uVar4 = FUN_0045e2eb();
        *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        iVar2 = FUN_0045e2eb();
        piStack_ec = (int *)0x0;
        if (iVar2 / 100000 == 0x5b) {
          iVar2 = *(int *)(unaff_EBP + -0x14) * 0x45;
          iStack_f0 = iVar2 + 0x22;
          puStack_f4 = (undefined1 *)0x34;
          iStack_f8 = *(int *)(unaff_EBP + -0x18);
          iStack_100 = unaff_EBP + 8;
          pwStack_fc = (wchar_t *)0x186a0;
          *(wchar_t ***)(unaff_EBP + -0x24) = &pwStack_fc;
          piStack_104 = (int *)0x494d8f;
          FUN_0046fc23();
          *(undefined1 *)(unaff_EBP + -4) = 10;
          iStack_100 = 0x494d98;
          FUN_0048b97b();
          iStack_100 = 0x494d9f;
          FUN_00556c6a();
          piStack_ec = (int *)(unaff_EBP + -0x44);
          iStack_f0 = 0x494db1;
          FUN_00556acf();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          piStack_ec = (int *)0x494dbe;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 10;
        }
        else {
          iStack_f0 = 0;
          iVar2 = *(int *)(unaff_EBP + -0x14) * 0x45;
          puStack_f4 = (undefined1 *)0x0;
          iStack_f8 = 0;
          pwStack_fc = (wchar_t *)0x0;
          iStack_100 = iVar2 + 0x22;
          piStack_104 = (int *)0x34;
          uStack_108 = *(undefined4 *)(unaff_EBP + -0x18);
          uStack_10c = 100000;
          *(undefined4 **)(unaff_EBP + -0x24) = &uStack_10c;
          FUN_0046fc23(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          FUN_0048b97b();
          FUN_005558b0();
          piStack_ec = (int *)(unaff_EBP + -0x4c);
          iStack_f0 = 0x494e0b;
          FUN_0045a1d8();
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          piStack_ec = (int *)0x494e18;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 10;
        }
        FUN_00414ebb();
        puStack_f4 = (undefined1 *)&piStack_ec;
        *(int ***)(unaff_EBP + -0x24) = &piStack_ec;
        iStack_f0 = 1;
        iStack_f8 = 0x494e34;
        FUN_007d4a9a();
        iStack_f0 = unaff_EBP + -0x1c;
        puStack_f4 = (undefined1 *)0x494e3f;
        FUN_007d3a22();
        piStack_ec = (int *)0x494e4c;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
        piStack_ec = (int *)(unaff_EBP + -0x6c);
        iStack_f0 = 0x494e5a;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          piStack_ec = (int *)0x494e66;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        piStack_ec = (int *)0x494e7a;
        FUN_00403191();
        piStack_ec = (int *)(unaff_EBP + -0xac);
        puStack_f4 = (undefined1 *)(unaff_EBP + -0x38);
        iStack_f0 = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iStack_f8 = 0x494e94;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        iStack_f0 = 0x494ea1;
        iStack_f0 = FUN_00449749();
        puStack_f4 = (undefined1 *)0x494eaa;
        iStack_f8 = FUN_00449713();
        *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_f4;
        pwStack_fc = (wchar_t *)0x494eb6;
        FUN_00448a17();
        iStack_f8 = iVar2 + 0x24;
        pwStack_fc = (wchar_t *)0x8;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        iStack_100 = 0x494ec8;
        FUN_004115d9();
        iStack_100 = 0x494ecf;
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
          piStack_ec = (int *)0x494ee0;
          (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        piStack_ec = (int *)0x494ef0;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_ec = (int *)0x494efb;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 10;
        piStack_ec = (int *)0x494f08;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_ec = (int *)0x494f13;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        piStack_ec = *(int **)(*(int *)(iVar7 + 4 + **(int **)(unaff_EBP + -0x30)) + 0x20);
        iStack_f0 = unaff_EBP + -0x20;
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        puStack_f4 = (undefined1 *)0x494f31;
        FUN_007d3546();
        iVar7 = *(int *)(*(int *)(iVar7 + 4 + **(int **)(unaff_EBP + -0x30)) + 0xc);
        if ((iVar7 < 80000000) || (89999999 < iVar7)) {
          piStack_ec = (int *)(unaff_EBP + -0x48);
          iStack_f0 = 0x494f80;
          puVar6 = (undefined4 *)FUN_00679d22();
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 2;
          *(undefined4 *)(unaff_EBP + -4) = 0x15;
        }
        else {
          piStack_ec = (int *)(unaff_EBP + -0x3c);
          iStack_f0 = 0x494f63;
          puVar6 = (undefined4 *)FUN_00679d22();
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 1;
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
        }
        piStack_ec = (int *)*puVar6;
        iStack_f0 = 0x494fa2;
        FUN_0045efbb();
        *(undefined4 *)(unaff_EBP + -4) = 0x14;
        if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
          FUN_00414ebb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0x13;
        if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
          FUN_00414ebb();
        }
        piStack_ec = (int *)0x494fe0;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
        piStack_ec = (int *)(unaff_EBP + -0x7c);
        iStack_f0 = 0x494fee;
        iVar7 = FUN_00402e32();
        if (iVar7 < 0) {
          piStack_ec = (int *)0x494ffa;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        piStack_ec = (int *)0x495004;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
        piStack_ec = (int *)(unaff_EBP + -0x5c);
        iStack_f0 = 0x495012;
        iVar7 = FUN_00402e32();
        if (iVar7 < 0) {
          piStack_ec = (int *)0x49501e;
          FUN_00878dfb();
        }
        piStack_ec = (int *)(unaff_EBP + -0x5c);
        puStack_f4 = (undefined1 *)(unaff_EBP + -0x34);
        iStack_f0 = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        iStack_f8 = 0x495034;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        iStack_f0 = 0x495041;
        iStack_f0 = FUN_00449749();
        puStack_f4 = (undefined1 *)0x49504a;
        iStack_f8 = FUN_00449713();
        *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_f4;
        pwStack_fc = 
        L"욃嘵ࡪ䶍예ﱅ\xe818앱\xfff7좋쯨﬽诿책쌻䗆៼ٴࢋｐࡑ䖍傤䗆᛼㛨\xf6db㯿姃ٽ\xe850㵣>䖍傄䗆ᏼỨ\xf6db㯿姃ٽ\xe850㵋>䶍웠ﱅ\xe80a﷿\xfff7䶍웤ﱅ\xe806ﷳ\xfff7疋ￔ\xec45綃׬谏ﮞ\xffff䖋㯘裃ﱝٴࢋｐࡑ䖋茈ﱍ㯿瓃謆倈凿謈\xf44d幟襤\r"
        ;
        puStack_f4 = extraout_ECX_01;
        FUN_00448a17();
        iStack_f8 = iVar2 + 0x35;
        pwStack_fc = (wchar_t *)0x8;
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        iStack_100 = 0x495068;
        FUN_004115d9();
        iStack_100 = 0x49506f;
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
          piStack_ec = (int *)0x495080;
          (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        piStack_ec = (int *)0x49508d;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_ec = (int *)0x495098;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        piStack_ec = (int *)0x4950a5;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_ec = (int *)0x4950b0;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 6;
        FUN_00414ebb();
        goto LAB_004950c8;
      }
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    if (4 < *(int *)(unaff_EBP + -0x14)) {
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
        piStack_ec = (int *)0x4950e8;
        (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        piStack_ec = (int *)0x4950f9;
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}


