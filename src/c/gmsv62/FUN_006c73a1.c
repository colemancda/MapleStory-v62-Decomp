/* FUN_006c73a1 - 0x006c73a1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006c73a1(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int unaff_EBP;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  undefined4 uStack_140;
  int *piStack_138;
  int iStack_134;
  undefined1 *puStack_130;
  int iStack_12c;
  int *piStack_128;
  int *piStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  undefined4 *puStack_f8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x30) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  puStack_f8 = (undefined4 *)0x3af;
  iStack_fc = unaff_EBP + -0x18;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_100 = 0x6c73d2;
  puVar5 = (undefined4 *)FUN_00679d86();
  uStack_100 = *puVar5;
  puStack_f8 = (undefined4 *)0x0;
  iStack_fc = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_104 = 0x6c73e3;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    puStack_f8 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + -0xc);
    iStack_fc = 0x6c73f9;
    FUN_00403384();
  }
  puStack_f8 = &DAT_00980690;
  iStack_fc = 0x6c7408;
  FUN_00403191();
  puStack_f8 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_fc = 0x6c7415;
  FUN_00403191();
  piStack_120 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_120 == (int *)0x0) {
    puStack_f8 = (undefined4 *)0x80004003;
    iStack_fc = 0x6c742a;
    FUN_00878dfb();
    piStack_120 = *(int **)(unaff_EBP + -0x14);
  }
  uStack_104 = *(undefined4 *)(unaff_EBP + -0x60);
  uStack_100 = *(undefined4 *)(unaff_EBP + -0x5c);
  iVar6 = *piStack_120;
  iStack_fc = *(undefined4 *)(unaff_EBP + -0x58);
  puStack_f8 = *(undefined4 **)(unaff_EBP + -0x54);
  uStack_114 = *(undefined4 *)(unaff_EBP + -0x50);
  uStack_110 = *(undefined4 *)(unaff_EBP + -0x4c);
  uStack_118 = 0x153;
  uStack_10c = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_11c = 0x275;
  *(int **)(unaff_EBP + -0x18) = piStack_120;
  uStack_108 = *(undefined4 *)(unaff_EBP + -0x44);
  iVar6 = (**(code **)(iVar6 + 0x2c))();
  if (iVar6 < 0) {
    piStack_128 = *(int **)(unaff_EBP + -0x18);
    puStack_130 = (undefined1 *)0x6c746a;
    iStack_12c = iVar6;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_128 = (int *)0x6c7477;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_128 = (int *)0x6c7482;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_128 = (int *)0x6c748e;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_128 = (int *)0x6c7499;
    FUN_00878dfb();
  }
  iVar6 = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  do {
    iVar3 = *(int *)(unaff_EBP + -0x30);
    iVar8 = iVar3 + iVar6 * 0xc;
    bVar1 = *(byte *)(iVar8 + 0x578);
    *(int *)(unaff_EBP + -0x18) = iVar8;
    *(uint *)(unaff_EBP + -0x2c) = (uint)bVar1;
    if (bVar1 != 0) {
      piStack_128 = (int *)(unaff_EBP + -0x1c);
      puStack_130 = (undefined1 *)0x6c74cc;
      iStack_12c = iVar6;
      FUN_006c831e();
      if ((*(int *)(unaff_EBP + -0x1c) != 0) || (*(int *)(unaff_EBP + -0x24) != 0)) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        cVar2 = *(char *)(iVar8 + 0x578);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if ((cVar2 == '\x02') || ((cVar2 == '\x03' || (cVar2 == '\a')))) {
          iStack_144 = *(undefined4 *)(iVar8 + 0x579);
          iVar6 = *(int *)(iVar8 + 0x580);
          piStack_128 = (int *)0x0;
          iStack_12c = 0;
          puStack_130 = (undefined1 *)0x0;
          iStack_134 = 0;
          piStack_138 = (int *)0x0;
          iStack_148 = *(int *)(unaff_EBP + -0x24) + 0x20;
          uStack_140 = *(undefined4 *)(unaff_EBP + -0x1c);
          *(int *)(unaff_EBP + -0x18) = iStack_144;
          iStack_14c = unaff_EBP + -0x14;
          *(int **)(unaff_EBP + -0x20) = &iStack_148;
          FUN_0046fc23();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_14c = 0x6c752e;
          FUN_0048b97b();
          iStack_14c = 0x6c7535;
          FUN_005558b0();
          if (*(int *)(unaff_EBP + -0x2c) == 2) {
            iStack_12c = iVar3 + 0xb7c;
            *(int ***)(unaff_EBP + -0x20) = &piStack_128;
            puStack_130 = (undefined1 *)0x6c754e;
            FUN_00424dbc();
            puStack_130 = (undefined1 *)(*(int *)(unaff_EBP + -0x24) + 0x14);
            iStack_134 = *(undefined4 *)(unaff_EBP + -0x1c);
            *(int ***)(unaff_EBP + -0x20) = &piStack_138;
            uStack_140 = 0x6c7568;
            piStack_138 = extraout_ECX_00;
            iStack_12c = iVar6;
            FUN_0046fc23();
            FUN_007d3201();
          }
          if ((*(int *)(unaff_EBP + -0x2c) == 3) && (iVar6 < 1)) {
            if (*(int *)(unaff_EBP + -0x14) == 0) {
              piStack_128 = (int *)0x6c7589;
              FUN_00878dfb();
            }
            piVar4 = *(int **)(unaff_EBP + -0x14);
            piStack_128 = (int *)0x20;
            iStack_12c = 0x20;
            puStack_130 = *(undefined1 **)(unaff_EBP + -0x24);
            iStack_134 = *(undefined4 *)(unaff_EBP + -0x1c);
            piStack_138 = piVar4;
            iStack_12c = (**(code **)(*piVar4 + 0x8c))();
            if (iStack_12c < 0) {
              puStack_130 = (undefined1 *)0x6c75b4;
              piStack_128 = piVar4;
              FUN_00878e09();
            }
          }
          piStack_128 = (int *)0x0;
          iStack_12c = *(int *)(unaff_EBP + -0x18);
          puStack_130 = (undefined1 *)(unaff_EBP + -0x70);
          iStack_134 = 0x6c75c8;
          puVar5 = (undefined4 *)FUN_005536ce();
          piStack_128 = (int *)0x6c75d2;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                     (IBinding *)*puVar5);
          FUN_004125e6();
        }
        else if (cVar2 == '\x01') {
          piStack_128 = (int *)0x6c75f8;
          iVar6 = FUN_0064d61f();
          piStack_128 = (int *)0x6c7606;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                     *(IBinding **)(iVar6 + 0x90));
          piStack_128 = (int *)0xff;
          iStack_12c = 0x6c7615;
          FUN_004031b7();
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            piStack_128 = (int *)0x6c7629;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              piStack_128 = (int *)0x6c7634;
              FUN_00878dfb();
            }
          }
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            piStack_128 = (int *)0x6c7642;
            FUN_00878dfb();
          }
          piVar4 = *(int **)(unaff_EBP + -0x14);
          *(int **)(unaff_EBP + -0x2c) = piVar4;
          *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x10);
          iVar6 = FUN_0040eed0();
          *(int *)(unaff_EBP + -0x38) = (*(int *)(unaff_EBP + -0x24) - iVar6) + 0x20;
          FUN_0040eea9();
          iStack_134 = *(undefined4 *)(unaff_EBP + -0x18);
          piStack_138 = *(int **)(unaff_EBP + -0x38);
          puStack_130 = *(undefined1 **)(unaff_EBP + -0x50);
          iStack_12c = *(int *)(unaff_EBP + -0x4c);
          piStack_128 = *(int **)(unaff_EBP + -0x48);
          uStack_140 = *(undefined4 *)(unaff_EBP + -0x2c);
          iStack_144 = 0x6c768a;
          iVar6 = (**(code **)(*piVar4 + 0x80))();
          if (iVar6 < 0) {
            piStack_128 = *(int **)(unaff_EBP + -0x2c);
            puStack_130 = (undefined1 *)0x6c769c;
            iStack_12c = iVar6;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          piStack_128 = (int *)0x6c76a9;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            piStack_128 = (int *)0x6c76b8;
            FUN_00878dfb();
          }
        }
        else if (cVar2 == '\b') {
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
          piStack_128 = (int *)(unaff_EBP + -0x6c);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iStack_12c = 0x6c76df;
          puVar5 = (undefined4 *)FUN_00679d22();
          piStack_128 = (int *)*puVar5;
          iStack_12c = unaff_EBP + -0x28;
          *(undefined1 *)(unaff_EBP + -4) = 8;
          puStack_130 = (undefined1 *)0x6c76f5;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (*(int *)(unaff_EBP + -0x6c) != 0) {
            piStack_128 = (int *)0x6c770c;
            FUN_00434e38();
          }
          piStack_128 = (int *)0x6c771e;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 9;
          piStack_128 = (int *)0x6c772b;
          FUN_00403191();
          piStack_128 = (int *)0x0;
          iStack_12c = -1;
          puStack_130 = *(undefined1 **)(unaff_EBP + -0x28);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          iStack_134 = 0;
          piStack_138 = (int *)0x0;
          (*DAT_0097b4c8)();
          FUN_0087a1b0();
          uStack_140 = 0;
          iStack_144 = unaff_EBP + -0xe4;
          iStack_148 = unaff_EBP + -0x60;
          iStack_14c = -1;
          uVar7 = FUN_00449713(&piStack_138);
          uVar7 = FUN_00456ad5(uVar7);
          *(int **)(unaff_EBP + -0x20) = &iStack_14c;
          FUN_004033a1(uVar7);
          iVar6 = unaff_EBP + -0xf4;
          *(undefined1 *)(unaff_EBP + -4) = 10;
          FUN_00405a1d(iVar6);
          FUN_00402660();
          FUN_00404a02(iVar6);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iStack_144 = 0x6c77a1;
          iVar6 = FUN_004032b4();
          *(int *)(unaff_EBP + -100) = iVar6;
          *(undefined4 *)(unaff_EBP + -0x40) = 0;
          if (iVar6 != 0) {
            uStack_140 = 0x6c77b7;
            iVar6 = FUN_0041a581();
            if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
              uStack_140 = 0x6c77c8;
              FUN_00878dfb();
            }
          }
          uStack_140 = 0x6c77d3;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                     *(IBinding **)(unaff_EBP + -0x40));
          FUN_004125e6();
          *(undefined1 *)(unaff_EBP + -4) = 10;
          uStack_140 = 0x6c77eb;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            uStack_140 = 0x6c77f6;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 9;
          uStack_140 = 0x6c7803;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            uStack_140 = 0x6c780e;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          uStack_140 = 0x6c781e;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            uStack_140 = 0x6c7829;
            FUN_00878dfb();
          }
          uStack_140 = 0xff;
          iStack_144 = 0x6c783b;
          FUN_004031b7();
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            uStack_140 = 0x6c784f;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              uStack_140 = 0x6c785a;
              FUN_00878dfb();
            }
          }
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            uStack_140 = 0x6c7868;
            FUN_00878dfb();
          }
          piVar4 = *(int **)(unaff_EBP + -0x14);
          *(int **)(unaff_EBP + -0x2c) = piVar4;
          *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x10);
          iVar6 = FUN_0040eed0();
          *(int *)(unaff_EBP + -0x38) = (*(int *)(unaff_EBP + -0x24) - iVar6) + 0x20;
          iVar6 = FUN_0040eea9();
          iStack_14c = *(int *)(unaff_EBP + -0x18);
          iStack_148 = *(int *)(unaff_EBP + -0xc4);
          iStack_144 = *(undefined4 *)(unaff_EBP + -0xc0);
          uStack_140 = *(undefined4 *)(unaff_EBP + -0xbc);
          iVar6 = (**(code **)(*piVar4 + 0x80))
                            (*(undefined4 *)(unaff_EBP + -0x2c),*(int *)(unaff_EBP + -0x1c) - iVar6,
                             *(undefined4 *)(unaff_EBP + -0x38));
          if (iVar6 < 0) {
            piStack_128 = *(int **)(unaff_EBP + -0x2c);
            puStack_130 = (undefined1 *)0x6c78c5;
            iStack_12c = iVar6;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          piStack_128 = (int *)0x6c78d5;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            piStack_128 = (int *)0x6c78e0;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (*(int *)(unaff_EBP + -0x28) != 0) {
            piStack_128 = (int *)0x6c78f8;
            FUN_00434e38();
          }
        }
        else if (((cVar2 == '\x04') || (cVar2 == '\x05')) || (cVar2 == '\x06')) {
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
          piStack_128 = (int *)(unaff_EBP + -0x74);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iStack_12c = 0x6c792e;
          puVar5 = (undefined4 *)FUN_00679d22();
          piStack_128 = (int *)*puVar5;
          iStack_12c = unaff_EBP + -0x28;
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          puStack_130 = (undefined1 *)0x6c7944;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          if (*(int *)(unaff_EBP + -0x74) != 0) {
            piStack_128 = (int *)0x6c795b;
            FUN_00434e38();
          }
          piStack_128 = (int *)0x0;
          iStack_12c = -1;
          puStack_130 = *(undefined1 **)(unaff_EBP + -0x28);
          iStack_134 = 0;
          piStack_138 = (int *)0x0;
          (*DAT_0097b4c8)();
          FUN_0087a1b0();
          piStack_128 = (int *)0x0;
          iStack_12c = -1;
          iStack_134 = 0x6c7987;
          puStack_130 = (undefined1 *)&piStack_120;
          iStack_134 = FUN_00449713();
          piStack_138 = (int *)0x6c798d;
          puStack_130 = (undefined1 *)FUN_00456ad5();
          *(int **)(unaff_EBP + -0x20) = &iStack_12c;
          iStack_134 = 0x6c799a;
          FUN_004033a1();
          puStack_130 = (undefined1 *)(unaff_EBP + -0xb4);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iStack_134 = 0x6c79b0;
          FUN_0040263d();
          iStack_134 = 0x6c79b7;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_12c = 0x6c79c2;
          uVar7 = FUN_004032b4();
          *(undefined4 *)(unaff_EBP + -0x68) = uVar7;
          piStack_128 = (int *)0x6c79d1;
          iVar6 = FUN_0041a581();
          if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
            piStack_128 = (int *)0x6c79e2;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          piStack_128 = (int *)0x6c79f2;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            piStack_128 = (int *)0x6c79fd;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            piStack_128 = (int *)0xff;
            iStack_12c = 0x6c7a18;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              piStack_128 = (int *)0x6c7a2c;
              FUN_00878dfb();
              if (*(int *)(unaff_EBP + -0x10) == 0) {
                piStack_128 = (int *)0x6c7a37;
                FUN_00878dfb();
              }
            }
            if (*(int *)(unaff_EBP + -0x14) == 0) {
              piStack_128 = (int *)0x6c7a45;
              FUN_00878dfb();
            }
            piVar4 = *(int **)(unaff_EBP + -0x14);
            *(int **)(unaff_EBP + -0x38) = piVar4;
            *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x10);
            iVar6 = FUN_0040eed0();
            *(int *)(unaff_EBP + -0x20) = (*(int *)(unaff_EBP + -0x24) - iVar6) + 0x20;
            FUN_0040eea9();
            iStack_134 = *(undefined4 *)(unaff_EBP + -0x34);
            piStack_138 = *(int **)(unaff_EBP + -0x20);
            puStack_130 = *(undefined1 **)(unaff_EBP + -0xd4);
            iStack_12c = *(int *)(unaff_EBP + -0xd0);
            piStack_128 = *(int **)(unaff_EBP + -0xcc);
            uStack_140 = *(undefined4 *)(unaff_EBP + -0x38);
            iStack_144 = 0x6c7a90;
            iVar6 = (**(code **)(*piVar4 + 0x80))();
            if (iVar6 < 0) {
              piStack_128 = *(int **)(unaff_EBP + -0x38);
              puStack_130 = (undefined1 *)0x6c7aa2;
              iStack_12c = iVar6;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            piStack_128 = (int *)0x6c7ab2;
            iVar6 = FUN_00402bc3();
            if (iVar6 < 0) {
              piStack_128 = (int *)0x6c7abd;
              FUN_00878dfb();
            }
            if (*(int *)(*(int *)(unaff_EBP + -0x18) + 0x579) + -0x46 < 0x25) {
              iVar6 = *(int *)(unaff_EBP + -0x30);
              piStack_128 = *(int **)(unaff_EBP + -0x2c);
              iStack_12c = 0x6c7af8;
              iVar8 = FUN_006c978b();
              *(undefined4 *)(iVar6 + 0x9ac + iVar8 * 0xc) = 1;
              *(undefined1 *)(unaff_EBP + -4) = 4;
              FUN_00414ebb();
              goto LAB_006c7b12;
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_004125e6();
          goto LAB_006c7e82;
        }
LAB_006c7b12:
        if (*(int *)(unaff_EBP + -0x3c) == 0x1d) {
          iVar6 = *(int *)(unaff_EBP + -0x30);
          piStack_128 = (int *)(unaff_EBP + -0x1c);
          iStack_12c = 0x59;
          puStack_130 = (undefined1 *)0x6c7cbe;
          FUN_006c831e();
          cVar2 = *(char *)(iVar6 + 0x6d4);
          if ((cVar2 == '\0') ||
             ((((cVar2 != '\x02' && (cVar2 != '\x03')) && (cVar2 != '\a')) ||
              ((*(int *)(unaff_EBP + -0x1c) == 0 && (*(int *)(unaff_EBP + -0x24) == 0)))))) {
            piStack_128 = (int *)0xff;
            iStack_12c = 0x6c7dcd;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              piStack_128 = (int *)0x6c7de1;
              FUN_00878dfb();
              if (*(int *)(unaff_EBP + -0x10) == 0) {
                piStack_128 = (int *)0x6c7dec;
                FUN_00878dfb();
              }
            }
            if (*(int *)(unaff_EBP + -0x14) == 0) {
              piStack_128 = (int *)0x6c7dfa;
              FUN_00878dfb();
            }
            piVar4 = *(int **)(unaff_EBP + -0x14);
            *(int **)(unaff_EBP + -0x18) = piVar4;
            *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x10);
            iVar6 = FUN_0040eed0();
            *(int *)(unaff_EBP + -0x34) = (*(int *)(unaff_EBP + -0x24) - iVar6) + 0x20;
            FUN_0040eea9();
            iStack_134 = *(undefined4 *)(unaff_EBP + -0x20);
            piStack_138 = *(int **)(unaff_EBP + -0x34);
            puStack_130 = *(undefined1 **)(unaff_EBP + -0xa4);
            iStack_12c = *(int *)(unaff_EBP + -0xa0);
            piStack_128 = *(int **)(unaff_EBP + -0x9c);
            uStack_140 = *(undefined4 *)(unaff_EBP + -0x18);
            iStack_144 = 0x6c7e45;
            iVar6 = (**(code **)(*piVar4 + 0x80))();
            if (iVar6 < 0) {
              piStack_128 = *(int **)(unaff_EBP + -0x18);
              puStack_130 = (undefined1 *)0x6c7e57;
              iStack_12c = iVar6;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 4;
            goto LAB_006c7e61;
          }
          iStack_144 = *(undefined4 *)(iVar6 + 0x6d5);
          iVar8 = *(int *)(iVar6 + 0x6dc);
          piStack_128 = (int *)0x0;
          iStack_12c = 0;
          puStack_130 = (undefined1 *)0x0;
          iStack_134 = 0;
          piStack_138 = (int *)0x0;
          iStack_148 = *(int *)(unaff_EBP + -0x24) + 0x20;
          uStack_140 = *(undefined4 *)(unaff_EBP + -0x1c);
          iStack_14c = unaff_EBP + -0x14;
          *(int **)(unaff_EBP + -0x20) = &iStack_148;
          FUN_0046fc23();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_14c = 0x6c7d1e;
          FUN_0048b97b();
          iStack_14c = 0x6c7d25;
          FUN_005558b0();
          if (*(char *)(iVar6 + 0x6d4) == '\x02') {
            iStack_12c = iVar6 + 0xb7c;
            *(int ***)(unaff_EBP + -0x20) = &piStack_128;
            puStack_130 = (undefined1 *)0x6c7d41;
            FUN_00424dbc();
            puStack_130 = (undefined1 *)(*(int *)(unaff_EBP + -0x24) + 0x14);
            iStack_134 = *(undefined4 *)(unaff_EBP + -0x1c);
            *(int ***)(unaff_EBP + -0x20) = &piStack_138;
            uStack_140 = 0x6c7d5b;
            piStack_138 = extraout_ECX_01;
            iStack_12c = iVar8;
            FUN_0046fc23();
            FUN_007d3201();
          }
          if ((*(char *)(iVar6 + 0x6d4) == '\x03') && (iVar8 < 1)) {
            if (*(int *)(unaff_EBP + -0x14) == 0) {
              piStack_128 = (int *)0x6c7d87;
              FUN_00878dfb();
            }
            piVar4 = *(int **)(unaff_EBP + -0x14);
            piStack_128 = (int *)0x20;
            iStack_12c = 0x20;
            puStack_130 = *(undefined1 **)(unaff_EBP + -0x24);
            iStack_134 = *(undefined4 *)(unaff_EBP + -0x1c);
            piStack_138 = piVar4;
            iVar6 = (**(code **)(*piVar4 + 0x8c))();
            if (iVar6 < 0) {
              puStack_130 = (undefined1 *)0x6c7db6;
              iStack_12c = iVar6;
              piStack_128 = piVar4;
              FUN_00878e09();
            }
          }
        }
        else {
          if (*(int *)(unaff_EBP + -0x3c) == 0x2a) {
            piStack_128 = (int *)(unaff_EBP + -0x1c);
            iStack_12c = 0x36;
            puStack_130 = (undefined1 *)0x6c7bff;
            FUN_006c831e();
            piStack_128 = (int *)0xff;
            iStack_12c = 0x6c7c11;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              piStack_128 = (int *)0x6c7c25;
              FUN_00878dfb();
              if (*(int *)(unaff_EBP + -0x10) == 0) {
                piStack_128 = (int *)0x6c7c30;
                FUN_00878dfb();
              }
            }
            if (*(int *)(unaff_EBP + -0x14) == 0) {
              piStack_128 = (int *)0x6c7c3e;
              FUN_00878dfb();
            }
            piVar4 = *(int **)(unaff_EBP + -0x14);
            *(int **)(unaff_EBP + -0x18) = piVar4;
            *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x10);
            iVar6 = FUN_0040eed0();
            *(int *)(unaff_EBP + -0x34) = (*(int *)(unaff_EBP + -0x24) - iVar6) + 0x20;
            FUN_0040eea9();
            iStack_134 = *(undefined4 *)(unaff_EBP + -0x20);
            piStack_138 = *(int **)(unaff_EBP + -0x34);
            puStack_130 = *(undefined1 **)(unaff_EBP + -0x94);
            iStack_12c = *(int *)(unaff_EBP + -0x90);
            piStack_128 = *(int **)(unaff_EBP + -0x8c);
            uStack_140 = *(undefined4 *)(unaff_EBP + -0x18);
            iStack_144 = 0x6c7c89;
            iVar6 = (**(code **)(*piVar4 + 0x80))();
            if (iVar6 < 0) {
              piStack_128 = *(int **)(unaff_EBP + -0x18);
              puStack_130 = (undefined1 *)0x6c7c9b;
              iStack_12c = iVar6;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 4;
          }
          else {
            if (*(int *)(unaff_EBP + -0x3c) != 0x38) goto LAB_006c7e72;
            piStack_128 = (int *)(unaff_EBP + -0x1c);
            iStack_12c = 0x5a;
            puStack_130 = (undefined1 *)0x6c7b42;
            FUN_006c831e();
            piStack_128 = (int *)0xff;
            iStack_12c = 0x6c7b54;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              piStack_128 = (int *)0x6c7b68;
              FUN_00878dfb();
              if (*(int *)(unaff_EBP + -0x10) == 0) {
                piStack_128 = (int *)0x6c7b73;
                FUN_00878dfb();
              }
            }
            if (*(int *)(unaff_EBP + -0x14) == 0) {
              piStack_128 = (int *)0x6c7b81;
              FUN_00878dfb();
            }
            piVar4 = *(int **)(unaff_EBP + -0x14);
            *(int **)(unaff_EBP + -0x18) = piVar4;
            *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x10);
            iVar6 = FUN_0040eed0();
            *(int *)(unaff_EBP + -0x34) = (*(int *)(unaff_EBP + -0x24) - iVar6) + 0x20;
            FUN_0040eea9();
            iStack_134 = *(undefined4 *)(unaff_EBP + -0x20);
            piStack_138 = *(int **)(unaff_EBP + -0x34);
            puStack_130 = *(undefined1 **)(unaff_EBP + -0x84);
            iStack_12c = *(int *)(unaff_EBP + -0x80);
            piStack_128 = *(int **)(unaff_EBP + -0x7c);
            uStack_140 = *(undefined4 *)(unaff_EBP + -0x18);
            iStack_144 = 0x6c7bcc;
            iVar6 = (**(code **)(*piVar4 + 0x80))();
            if (iVar6 < 0) {
              piStack_128 = *(int **)(unaff_EBP + -0x18);
              puStack_130 = (undefined1 *)0x6c7bde;
              iStack_12c = iVar6;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 4;
          }
LAB_006c7e61:
          piStack_128 = (int *)0x6c7e67;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            piStack_128 = (int *)0x6c7e72;
            FUN_00878dfb();
          }
        }
LAB_006c7e72:
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
          piStack_128 = (int *)0x6c7e82;
          (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
        }
      }
    }
LAB_006c7e82:
    iVar6 = *(int *)(unaff_EBP + -0x3c) + 1;
    *(int *)(unaff_EBP + -0x3c) = iVar6;
    if (0x58 < iVar6) {
      piStack_128 = (int *)0x6c7e9e;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
      piStack_128 = (int *)(unaff_EBP + -0x50);
      iStack_12c = 0x6c7ead;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        piStack_128 = (int *)0x6c7eb9;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      piStack_128 = (int *)0x6c7ec3;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
      piStack_128 = (int *)(unaff_EBP + -0x60);
      iStack_12c = 0x6c7ecd;
      iVar6 = FUN_00402e32();
      if (iVar6 < 0) {
        piStack_128 = (int *)0x6c7ed9;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_128 = (int *)0x6c7ee9;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      piStack_128 = (int *)0x6c7ef9;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      piStack_128 = (int *)0x6c7f09;
      FUN_00403191();
      iVar6 = *(int *)(*(int *)(unaff_EBP + -0x30) + 0xb88);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      if (iVar6 == 0) {
        piStack_128 = (int *)0x6c7f28;
        FUN_00878dfb();
      }
      piStack_128 = (int *)(unaff_EBP + -0x60);
      iStack_12c = unaff_EBP + -0x84;
      puStack_130 = (undefined1 *)(unaff_EBP + -0x94);
      iStack_134 = unaff_EBP + -0xa4;
      piStack_138 = *(int **)(unaff_EBP + -0x14);
      uStack_140 = 0x6c7f56;
      FUN_004250ac();
      piStack_128 = (int *)0x6c7f62;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        piStack_128 = (int *)0x6c7f6d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      piStack_128 = (int *)0x6c7f7d;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        piStack_128 = (int *)0x6c7f88;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      piStack_128 = (int *)0x6c7f98;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        piStack_128 = (int *)0x6c7fa3;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_128 = (int *)0x6c7fb3;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        piStack_128 = (int *)0x6c7fbe;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      piStack_128 = (int *)0x6c7fcb;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        piStack_128 = (int *)0x6c7fd6;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_128 = (int *)0x6c7fe2;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        piStack_128 = (int *)0x6c7fed;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        piStack_128 = (int *)0x6c7ffe;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}


