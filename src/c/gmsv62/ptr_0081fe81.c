/* ptr_0081fe81 - 0x0081fe81 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * ptr_0081fe81(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_EAX;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *extraout_ECX;
  int *unaff_EBX;
  uint uVar6;
  int unaff_EBP;
  int *unaff_EDI;
  int *piStack_4;
  
  do {
    piStack_4 = in_EAX;
    piVar3 = (int *)FUN_005f3a71();
    if (piVar3 != unaff_EBX) {
      *(undefined4 *)(unaff_EBP + -0x78) =
           *(undefined4 *)(unaff_EDI[0xb] + *(int *)(unaff_EBP + -0x20) * 4);
      piStack_4 = unaff_EBX;
      iVar4 = FUN_0055a499();
      if (iVar4 != 0) {
        unaff_EDI[8] = 1;
      }
    }
    do {
      if (*(int **)(unaff_EBP + -0x20) == unaff_EBX) {
        piStack_4 = *(int **)unaff_EDI[0xb];
        FUN_004e61ea();
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        if (*(int *)(unaff_EBP + -0x40) == 0) {
          piStack_4 = *(int **)(unaff_EBP + -0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          if (piStack_4 != (int *)0x0) {
            (**(code **)(*piStack_4 + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          piStack_4 = (int *)0x820184;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          piStack_4 = (int *)0x820190;
          FUN_00414ebb();
          piStack_4 = *(int **)(unaff_EBP + -0x2c);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          if (piStack_4 != (int *)0x0) {
            (**(code **)(*piStack_4 + 8))();
          }
          piStack_4 = *(int **)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          if (piStack_4 != (int *)0x0) {
            (**(code **)(*piStack_4 + 8))();
          }
          piStack_4 = *(int **)(unaff_EBP + -0x28);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (piStack_4 != (int *)0x0) {
            (**(code **)(*piStack_4 + 8))();
          }
          piStack_4 = *(int **)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (piStack_4 != (int *)0x0) {
            (**(code **)(*piStack_4 + 8))();
          }
          piStack_4 = *(int **)(unaff_EBP + 8);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (piStack_4 != (int *)0x0) {
            (**(code **)(*piStack_4 + 8))();
          }
LAB_00820241:
          piStack_4 = (int *)0x0;
LAB_00820243:
          ExceptionList = *(void **)(unaff_EBP + -0xc);
          return piStack_4;
        }
        piStack_4 = (int *)0x0;
        *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff4;
        FUN_00679e4e(&stack0xfffffff4,0x3b4);
        iVar4 = unaff_EBP + -0x134;
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        FUN_0040263d(iVar4);
        FUN_004048a4(iVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        iVar4 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x4c) = 0;
        *(int *)(unaff_EBP + -0x70) = iVar4;
        if (iVar4 != 0) {
          piStack_4 = (int *)(unaff_EBP + -0x70);
          piStack_4 = (int *)FUN_00404b30();
          if (((int)piStack_4 < 0) && (piStack_4 != (int *)0x80004002)) {
            FUN_00878dfb();
          }
        }
        piStack_4 = (int *)(unaff_EBP + -0x134);
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        piStack_4 = (int *)FUN_00402bc3();
        if ((int)piStack_4 < 0) {
          FUN_00878dfb();
        }
        if ((*(char **)(unaff_EBP + -0x34) == (char *)0x0) ||
           (**(char **)(unaff_EBP + -0x34) == '\0')) {
          piStack_4 = (int *)0x6c6;
          puVar5 = (undefined4 *)FUN_00679d22();
          piStack_4 = (int *)*puVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          piStack_4 = (int *)FUN_00550c58();
          *(undefined1 *)(unaff_EBP + -4) = 0x31;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          piStack_4 = (int *)0x81ffae;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          piStack_4 = (int *)0x81ffba;
          FUN_00414ebb();
          piStack_4 = (int *)0x6c7;
          puVar5 = (undefined4 *)FUN_00679d22();
          piStack_4 = (int *)*puVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x32;
          piStack_4 = (int *)FUN_00550c58();
          *(undefined1 *)(unaff_EBP + -4) = 0x33;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0x32;
          piStack_4 = (int *)0x81fffc;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          piStack_4 = (int *)0x820008;
          FUN_00414ebb();
          piStack_4 = (int *)0x8da;
          puVar5 = (undefined4 *)FUN_00679d22();
          piStack_4 = (int *)*puVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x34;
          piStack_4 = (int *)FUN_00550c58();
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0x34;
          piStack_4 = (int *)0x82004a;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          piStack_4 = (int *)0x820056;
          FUN_00414ebb();
        }
        else {
          piStack_4 = (int *)(unaff_EBP + -0x34);
          FUN_00414f8b();
          piStack_4 = (int *)(unaff_EBP + -0x38);
          FUN_00414f8b();
        }
        piStack_4 = *(int **)(unaff_EBP + -0x4c);
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        if (piStack_4 != (int *)0x0) {
          (**(code **)(*piStack_4 + 8))();
        }
        piStack_4 = *(int **)(unaff_EBP + -0x40);
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        if (piStack_4 != (int *)0x0) {
          (**(code **)(*piStack_4 + 8))();
        }
      }
      uVar6 = 0;
      while( true ) {
        iVar4 = *(int *)(*(int *)(unaff_EBP + -0x3c) + 0x56c);
        *(uint *)(unaff_EBP + -0x10) = uVar6;
        if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar6)) break;
        if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x3c) + 0x56c) + uVar6 * 0xc) ==
            *(int *)(unaff_EDI[0xb] + *(int *)(unaff_EBP + -0x20) * 4)) {
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            piStack_4 = (int *)0x8200d1;
            puVar5 = (undefined4 *)FUN_00518b2e();
            *puVar5 = *(undefined4 *)(unaff_EBP + -0x10);
          }
          iVar4 = 1;
          if (unaff_EDI[6] != 1) {
            if (*(int *)(unaff_EBP + -0x10) != 0) {
              iVar4 = (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x3c) + 0x56c) + 8 + uVar6 * 0xc) !=
                      0) + 2;
            }
            unaff_EDI[6] = iVar4;
          }
        }
        uVar6 = *(int *)(unaff_EBP + -0x10) + 1;
      }
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x1c) == 0) {
          piStack_4 = (int *)0x80004003;
          FUN_00878dfb();
        }
        piStack_4 = (int *)0x81fdf4;
        uVar6 = FUN_0040cf4d();
        if (*(uint *)(unaff_EBP + -0x20) < uVar6) break;
        piStack_4 = *(int **)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        if (piStack_4 != (int *)0x0) {
          (**(code **)(*piStack_4 + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        piStack_4 = (int *)0x82012a;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        piStack_4 = (int *)0x820136;
        FUN_00414ebb();
        piStack_4 = *(int **)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        if (piStack_4 != (int *)0x0) {
          (**(code **)(*piStack_4 + 8))();
        }
        piStack_4 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (piStack_4 != (int *)0x0) {
          (**(code **)(*piStack_4 + 8))();
        }
        *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
        *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + -0x48) + 0x44;
        iVar4 = *(int *)(unaff_EBP + -0x3c);
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          piStack_4 = (int *)0x80004003;
          FUN_00878dfb();
        }
        piStack_4 = (int *)0x81f9dc;
        uVar6 = FUN_0040cf4d();
        if (uVar6 <= *(uint *)(unaff_EBP + -0x24)) {
          piStack_4 = *(int **)(unaff_EBP + -0x28);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (piStack_4 != (int *)0x0) {
            (**(code **)(*piStack_4 + 8))();
          }
          piStack_4 = *(int **)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (piStack_4 != (int *)0x0) {
            (**(code **)(*piStack_4 + 8))();
          }
          piStack_4 = *(int **)(unaff_EBP + 8);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (piStack_4 != (int *)0x0) {
            (**(code **)(*piStack_4 + 8))();
          }
          piStack_4 = (int *)0x1;
          goto LAB_00820243;
        }
        piStack_4 = (int *)0x81f9ed;
        FUN_0087a1b0();
        piStack_4 = (int *)0x0;
        uVar2 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x24));
        *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff4;
        FUN_004033a1(uVar2);
        iVar1 = unaff_EBP + -0xc4;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_0040263d(iVar1);
        FUN_004048a4(iVar1);
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iVar1 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x5c) = iVar1;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        if (iVar1 != 0) {
          piStack_4 = (int *)(unaff_EBP + -0x5c);
          piStack_4 = (int *)FUN_00404b30();
          if (((int)piStack_4 < 0) && (piStack_4 != (int *)0x80004002)) {
            FUN_00878dfb();
          }
        }
        piStack_4 = (int *)(unaff_EBP + -0xc4);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_4 = (int *)FUN_00402bc3();
        if ((int)piStack_4 < 0) {
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
LAB_00820221:
          piStack_4 = (int *)0x820229;
          FUN_004027eb();
          piStack_4 = (int *)0x820231;
          FUN_004125d9();
          piStack_4 = (int *)0x820239;
          FUN_004027eb();
          piStack_4 = (int *)0x820241;
          FUN_004027eb();
          goto LAB_00820241;
        }
        unaff_EDI = (int *)(*(int *)(unaff_EBP + -0x48) + *(int *)(iVar4 + 0x584));
        piStack_4 = (int *)0x81fa8c;
        FUN_00820292();
        *(int ***)(unaff_EBP + -0x10) = &piStack_4;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        FUN_0040263d();
        piStack_4 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        piStack_4 = (int *)FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        FUN_00416f14();
        piStack_4 = (int *)0x81fae4;
        FUN_004027b3();
        piStack_4 = (int *)(unaff_EBP + -0x104);
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        piStack_4 = (int *)FUN_00402bc3();
        if ((int)piStack_4 < 0) {
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x2c) == 0) {
          piStack_4 = (int *)0x80004003;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x28) == 0) {
          piStack_4 = (int *)0x80004003;
          FUN_00878dfb();
        }
        piStack_4 = (int *)0x81fb2a;
        uVar2 = FUN_00404a94();
        *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
        piStack_4 = (int *)0x81fb36;
        iVar4 = FUN_00404a94();
        *unaff_EDI = *(int *)(unaff_EBP + -0x10) + iVar4;
        if (*(int *)(unaff_EBP + -0x2c) == 0) {
          piStack_4 = (int *)0x80004003;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x28) == 0) {
          piStack_4 = (int *)0x80004003;
          FUN_00878dfb();
        }
        piStack_4 = (int *)0x81fb68;
        uVar2 = FUN_00404abb();
        *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
        piStack_4 = (int *)0x81fb74;
        iVar1 = FUN_00404abb();
        iVar4 = *(int *)(unaff_EBP + -0x10);
        piStack_4 = (int *)0x0;
        *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff8;
        unaff_EDI[1] = iVar4 + iVar1;
        FUN_00679e4e(&stack0xfffffff8);
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        iVar4 = FUN_00412550();
        unaff_EDI[2] = iVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        piStack_4 = (int *)FUN_00402bc3();
        if ((int)piStack_4 < 0) {
          FUN_00878dfb();
        }
        piStack_4 = (int *)&DAT_0097812c;
        *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff8;
        FUN_00679e4e(&stack0xfffffff8);
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        FUN_004343c5();
        *(undefined4 *)(unaff_EBP + -0x34) = 0;
        piStack_4 = (int *)0xffffffff;
        FUN_00454081();
        piStack_4 = (int *)(unaff_EBP + -0xa4);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        piStack_4 = (int *)FUN_00402bc3();
        if ((int)piStack_4 < 0) {
          FUN_00878dfb();
        }
        piStack_4 = (int *)&DAT_0097812c;
        *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff8;
        FUN_00679e4e(&stack0xfffffff8);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        FUN_004343c5();
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
        piStack_4 = (int *)0xffffffff;
        FUN_00454081();
        piStack_4 = (int *)(unaff_EBP + -0xb4);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        piVar3 = (int *)FUN_00402bc3();
        if ((int)piVar3 < 0) {
          piStack_4 = piVar3;
          FUN_00878dfb();
          piStack_4 = extraout_ECX;
        }
        *(int ***)(unaff_EBP + -0x10) = &piStack_4;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        FUN_0040263d();
        piStack_4 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        piStack_4 = (int *)FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        piStack_4 = (int *)FUN_0041a485();
        if (((int)piStack_4 < 0) && (piStack_4 != (int *)0x80004002)) {
          FUN_00878dfb();
        }
        piStack_4 = (int *)0x81fd07;
        FUN_004027b3();
        piStack_4 = (int *)(unaff_EBP + -0xd4);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        piStack_4 = (int *)FUN_00402bc3();
        if ((int)piStack_4 < 0) {
          FUN_00878dfb();
        }
        piStack_4 = (int *)0x0;
        *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff4;
        FUN_00679e4e(&stack0xfffffff4,0x8d9);
        iVar4 = unaff_EBP + -0xf4;
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        FUN_0040263d(iVar4);
        FUN_004048a4(iVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        iVar4 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x68) = iVar4;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        if (iVar4 != 0) {
          piStack_4 = (int *)(unaff_EBP + -0x68);
          piStack_4 = (int *)FUN_00404b30();
          if (((int)piStack_4 < 0) && (piStack_4 != (int *)0x80004002)) {
            FUN_00878dfb();
          }
        }
        piStack_4 = (int *)(unaff_EBP + -0xf4);
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        piStack_4 = (int *)FUN_00402bc3();
        if ((int)piStack_4 < 0) {
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x1c) == 0) {
LAB_008201e7:
          piStack_4 = (int *)0x8201ef;
          FUN_004027eb();
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          if (*(int *)(unaff_EBP + -0x38) != 0) {
            piStack_4 = (int *)(*(int *)(unaff_EBP + -0x38) + -0xc);
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          if (*(int *)(unaff_EBP + -0x34) != 0) {
            piStack_4 = (int *)(*(int *)(unaff_EBP + -0x34) + -0xc);
            FUN_00434e38();
          }
          piStack_4 = (int *)0x820221;
          FUN_004125d9();
          goto LAB_00820221;
        }
        piStack_4 = (int *)0x81fdae;
        iVar4 = FUN_0040cf4d();
        if (iVar4 == 0) goto LAB_008201e7;
        if (*(int *)(unaff_EBP + -0x1c) == 0) {
          piStack_4 = (int *)0x80004003;
          FUN_00878dfb();
        }
        piStack_4 = (int *)0x81fdcd;
        FUN_0040cf4d();
        piStack_4 = (int *)(unaff_EBP + -0x2d);
        FUN_004b8dfa();
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
      }
      piStack_4 = (int *)0x81fe05;
      FUN_0087a1b0();
      piStack_4 = (int *)0x0;
      FUN_00412335();
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff8;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      uVar2 = FUN_00412550();
      piStack_4 = *(int **)(unaff_EBP + -0x20);
      puVar5 = (undefined4 *)FUN_004a312f();
      *puVar5 = uVar2;
      piStack_4 = (int *)(unaff_EBP + -0x114);
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      piStack_4 = (int *)FUN_00402bc3();
      unaff_EBX = (int *)0x0;
      if ((int)piStack_4 < 0) {
        FUN_00878dfb();
      }
      in_EAX = *(int **)(*(int *)(unaff_EBP + -0x3c) + 0x58c);
    } while ((in_EAX == (int *)0x0) || (unaff_EDI[8] != 0));
  } while( true );
}


