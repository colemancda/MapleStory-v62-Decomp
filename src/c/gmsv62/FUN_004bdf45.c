/* FUN_004bdf45 - 0x004bdf45 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004bdf45(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  int *extraout_ECX_03;
  int unaff_EBP;
  undefined4 *puVar7;
  undefined1 **ppuStack_134;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined4 uStack_128;
  int *piStack_124;
  int iStack_120;
  undefined4 *puStack_11c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  puStack_11c = (undefined4 *)0x0;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  iStack_120 = 0x4bdf68;
  iVar1 = FUN_004c2076();
  if (iVar1 != 0) {
    if (*(int **)(extraout_ECX + 0x1c) == (int *)0x0) {
LAB_004bdf94:
      iVar1 = 0;
    }
    else {
      puStack_11c = &DAT_0097bd2c;
      iStack_120 = 0x4bdf84;
      iVar1 = (**(code **)(**(int **)(extraout_ECX + 0x1c) + 0x48))();
      if ((iVar1 == 0) || (*(int *)(extraout_ECX + 0x1c) == 0)) goto LAB_004bdf94;
      iVar1 = *(int *)(extraout_ECX + 0x1c) + -4;
    }
    uVar2 = DAT_00978368;
    if (iVar1 == 0) {
      if (*(int **)(extraout_ECX + 0x1c) == (int *)0x0) {
LAB_004bec47:
        iVar1 = 0;
      }
      else {
        puStack_11c = &DAT_0097bd14;
        iStack_120 = 0x4bec37;
        iVar1 = (**(code **)(**(int **)(extraout_ECX + 0x1c) + 0x48))();
        if ((iVar1 == 0) || (*(int *)(extraout_ECX + 0x1c) == 0)) goto LAB_004bec47;
        iVar1 = *(int *)(extraout_ECX + 0x1c) + -4;
      }
      if (iVar1 == 0) {
        if (*(int **)(extraout_ECX + 0x1c) == (int *)0x0) {
LAB_004bec6e:
          iVar1 = 0;
        }
        else {
          puStack_11c = &DAT_0097bd18;
          iStack_120 = 0x4bec5e;
          iVar1 = (**(code **)(**(int **)(extraout_ECX + 0x1c) + 0x48))();
          if ((iVar1 == 0) || (*(int *)(extraout_ECX + 0x1c) == 0)) goto LAB_004bec6e;
          iVar1 = *(int *)(extraout_ECX + 0x1c) + -4;
        }
        if (iVar1 == 0) goto LAB_004bdf6c;
      }
      puStack_11c = (undefined4 *)0x4d6;
      iStack_120 = unaff_EBP + -0x30;
      piStack_124 = (int *)0x4bec8b;
      puStack_11c = (undefined4 *)FUN_00679d86();
      puStack_11c = (undefined4 *)*puStack_11c;
      *(undefined4 *)(unaff_EBP + -4) = 0xb;
      iStack_120 = 0x4bec99;
      FUN_007d3cdd();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puStack_11c = (undefined4 *)0x4beca6;
      FUN_00402676();
      puStack_11c = (undefined4 *)0x4becad;
      uVar2 = FUN_004bee37();
      goto LAB_004becad;
    }
    *(undefined4 *)(unaff_EBP + -0x3c) = DAT_00978358;
    puStack_11c = (undefined4 *)(unaff_EBP + -0x4c);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
    iStack_120 = 0x4bdfba;
    iVar1 = FUN_00455c59();
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar1 + 4);
    puStack_11c = (undefined4 *)0x4bdfc8;
    FUN_0045e4a2();
    puStack_11c = *(undefined4 **)(extraout_ECX + 0x14);
    piStack_124 = (int *)(unaff_EBP + -0x2c);
    iStack_120 = *(undefined4 *)(extraout_ECX + 0x10);
    uStack_128 = 0x4bdfd9;
    iVar1 = FUN_00458c4f();
    piVar6 = *(int **)(iVar1 + 4);
    puStack_11c = (undefined4 *)0x4bdfe4;
    FUN_0046575e();
    if (piVar6 != (int *)0x0) {
      iVar1 = *(int *)(extraout_ECX + 0x10);
      if (iVar1 == 1) {
        *(int **)(unaff_EBP + -0x14) = piVar6 + 3;
        puStack_11c = (undefined4 *)0x4be923;
        uStack_128 = FUN_0045e2eb();
        puStack_11c = (undefined4 *)0x1;
        iStack_120 = unaff_EBP + -0x118;
        piStack_124 = (int *)(uint)*(byte *)(*(int *)(unaff_EBP + -0x24) + 0x11);
        puStack_12c = (undefined1 *)0x4be93a;
        iVar1 = FUN_0044da62();
        if ((((0 < iVar1) &&
             ((iVar3 = *(int *)(unaff_EBP + -0x118), iVar3 == 0xe ||
              ((0x14 < iVar3 && (iVar3 < 0x31)))))) && (iVar3 != 0x18)) && (iVar3 != 0x19)) {
          iVar1 = 0;
          if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x3c) + 0x1744) + 0xc) == 0) {
            iVar1 = 1;
          }
          else {
            puStack_11c = (undefined4 *)0x4be998;
            puStack_11c = (undefined4 *)FUN_0045e2eb();
            iStack_120 = 0x4be9a0;
            uVar2 = FUN_0054e7b3();
            *(undefined4 *)(unaff_EBP + -0x30) = uVar2;
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
            *(undefined4 *)(unaff_EBP + -4) = 0;
            *(undefined4 *)(unaff_EBP + -0x34) = 0;
            puVar7 = (undefined4 *)(unaff_EBP + -0x118);
            *(undefined4 **)(unaff_EBP + -0x38) = &DAT_009641d8;
            *(undefined4 **)(unaff_EBP + -0x1c) = &DAT_009641f0;
            do {
              puStack_11c = *(undefined4 **)(unaff_EBP + -0x34);
              iStack_120 = unaff_EBP + -0x2c;
              piStack_124 = (int *)0x4be9d4;
              FUN_0078c04f();
              *(undefined1 *)(unaff_EBP + -4) = 1;
              if (*(int *)(unaff_EBP + -0x28) != 0) {
                puStack_11c = (undefined4 *)0x4be9e7;
                puStack_11c = (undefined4 *)FUN_0045e2eb();
                iStack_120 = 0x4be9f0;
                iVar3 = FUN_00459dd4();
                if (iVar3 == 0) {
                  if (*(int *)(unaff_EBP + -0x28) != 0) {
                    puStack_11c = (undefined4 *)0x4bea6e;
                    iVar3 = FUN_0045e2eb();
                    if (iVar3 / 10000 == 0xb5) {
                      puStack_11c = (undefined4 *)0x4bea82;
                      puStack_11c = (undefined4 *)FUN_0045e2eb();
                      iStack_120 = *(undefined4 *)(unaff_EBP + -0x34);
                      piStack_124 = (int *)0x4bea8b;
                      uVar2 = FUN_004bed23();
                      goto LAB_004be9f9;
                    }
                    if (*(int *)(unaff_EBP + -0x28) != 0) {
                      puStack_11c = (undefined4 *)0x4beaa4;
                      iVar3 = FUN_0045e2eb();
                      if ((iVar3 == 0x1bcd30) || (iVar3 == 0x1bf440)) {
                        puStack_11c = (undefined4 *)0x4beabe;
                        iVar3 = FUN_0045e2eb();
                        puVar5 = *(undefined4 **)(unaff_EBP + -0x38);
                        if (iVar3 != 0x1bf440) goto LAB_004be9f7;
                        uVar2 = puVar5[1];
                        goto LAB_004be9f9;
                      }
                    }
                  }
                }
                else {
                  puVar5 = *(undefined4 **)(unaff_EBP + -0x1c);
LAB_004be9f7:
                  uVar2 = *puVar5;
LAB_004be9f9:
                  *puVar7 = uVar2;
                  puStack_11c = (undefined4 *)(unaff_EBP + -0x2c);
                  iStack_120 = 0xffffffff;
                  iVar1 = iVar1 + 1;
                  puVar7 = puVar7 + 1;
                  piStack_124 = (int *)0x4bea0d;
                  FUN_004c2884();
                  iStack_120 = 0x4bea14;
                  FUN_004c2596();
                }
              }
              *(undefined1 *)(unaff_EBP + -4) = 0;
              puStack_11c = (undefined4 *)0x4bea20;
              FUN_004c267b();
              *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
              *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 4;
              *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 8;
            } while (*(int *)(unaff_EBP + -0x1c) < 0x9641fc);
            if (1 < iVar1) {
              puStack_11c = (undefined4 *)0x69c;
              iStack_120 = 0x4bea4c;
              iVar1 = FUN_004029b9();
              *(int *)(unaff_EBP + -0x30) = iVar1;
              *(undefined1 *)(unaff_EBP + -4) = 2;
              if (iVar1 == 0) {
                iVar1 = 0;
              }
              else {
                puStack_11c = (undefined4 *)0x4bea5e;
                iVar1 = FUN_007e62e9();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0;
              uVar4 = -(uint)(iVar1 != 0) & iVar1 + 8U;
              *(uint *)(unaff_EBP + -0x1c) = -(uint)(uVar4 != 0) & uVar4 - 8;
              puStack_11c = (undefined4 *)0x4beaf9;
              FUN_004c26c4();
              puStack_11c = (undefined4 *)0x0;
              iStack_120 = 0;
              puStack_12c = (undefined1 *)&piStack_124;
              *(int ***)(unaff_EBP + -0x30) = &piStack_124;
              uStack_128 = 0x191;
              *(undefined1 *)(unaff_EBP + -4) = 3;
              uStack_130 = 0x4beb17;
              piStack_124 = extraout_ECX_03;
              FUN_00679d22();
              uStack_128 = 0x897b50;
              puStack_12c = (undefined1 *)0x6;
              *(undefined1 *)(unaff_EBP + -4) = 3;
              uStack_130 = 0x4beb2a;
              FUN_004c2677();
              uStack_130 = 0x4beb31;
              FUN_007eddac();
              puStack_11c = (undefined4 *)(unaff_EBP + -0x10);
              iStack_120 = 0x4beb3d;
              FUN_007ee33f();
              puStack_11c = (undefined4 *)0x4beb45;
              FUN_007e6e3c();
              puStack_11c = (undefined4 *)0x4beb4d;
              iVar1 = FUN_004bc6a2();
              if (iVar1 != 1) {
                *(undefined1 *)(unaff_EBP + -4) = 0;
                puStack_11c = (undefined4 *)0x4beb5e;
                FUN_004c26e1();
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                puStack_11c = (undefined4 *)0x4beb6a;
                FUN_004c2848();
                goto LAB_004bdf6c;
              }
              uVar2 = *(undefined4 *)
                       (unaff_EBP + -0x118 + *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x124) * 4);
              *(undefined1 *)(unaff_EBP + -4) = 0;
              iVar1 = 1;
              *(undefined4 *)(unaff_EBP + -0x118) = uVar2;
              puStack_11c = (undefined4 *)0x4beb94;
              FUN_004c26e1();
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            puStack_11c = (undefined4 *)0x4beba0;
            FUN_004c2848();
          }
        }
        iVar3 = 0;
        if (0 < iVar1) {
          piVar6 = (int *)(unaff_EBP + -0x118);
          do {
            if ((iVar1 < 2) || (*(int *)(*(int *)(unaff_EBP + -0x24) + 0x25f + *piVar6 * 8) == 0)) {
              puStack_11c = *(undefined4 **)(unaff_EBP + -0x118 + iVar3 * 4);
              iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
              piStack_124 = (int *)0x4bebe8;
              iVar1 = FUN_004bfab4();
              if (iVar1 != 0) {
                puStack_11c = (undefined4 *)0x4d6;
                iStack_120 = unaff_EBP + -0x40;
                piStack_124 = (int *)0x4bec03;
                puStack_11c = (undefined4 *)FUN_00679d86();
                puStack_11c = (undefined4 *)*puStack_11c;
                *(undefined4 *)(unaff_EBP + -4) = 5;
                iStack_120 = 0x4bec11;
                FUN_007d3cdd();
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                puStack_11c = (undefined4 *)0x4bec1e;
                FUN_00402676();
                uVar2 = 1;
                goto LAB_004becad;
              }
              break;
            }
            iVar3 = iVar3 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar3 < iVar1);
        }
      }
      else if (iVar1 == 2) {
        puStack_11c = (undefined4 *)0x4be459;
        iVar1 = FUN_004bed04();
        if (iVar1 == 0) {
          puStack_11c = (undefined4 *)0x4be468;
          iVar1 = (**(code **)(*piVar6 + 4))();
          if (iVar1 == 0) {
            puStack_11c = (undefined4 *)0x0;
            iStack_120 = 200;
            piStack_124 = (int *)0x4be4a5;
            iVar1 = FUN_004becbc();
            if (iVar1 != 0) {
              *(undefined4 *)(unaff_EBP + -0x24) = DAT_00973a94;
              puStack_11c = (undefined4 *)0x4be4bb;
              puStack_11c = (undefined4 *)FUN_0045e2eb();
              iStack_120 = 0x4be4c4;
              iVar1 = FUN_004c234a();
              if (iVar1 != 0) {
                puStack_11c = (undefined4 *)0x4be4cf;
                puStack_11c = (undefined4 *)FUN_0045e2eb();
                iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
                piStack_124 = (int *)0x4be4de;
                FUN_0083cd0a();
                goto LAB_004bdf6c;
              }
            }
            puStack_11c = (undefined4 *)0x0;
            iStack_120 = 200;
            piStack_124 = (int *)0x4be4ee;
            iVar1 = FUN_004becbc();
            if (iVar1 != 0) {
              *(int **)(unaff_EBP + -0x14) = piVar6 + 3;
              puStack_11c = (undefined4 *)0x4be502;
              iVar1 = FUN_0045e2eb();
              iVar1 = iVar1 / 10000;
              if (((((iVar1 == 200) || (iVar1 == 0xc9)) || (iVar1 == 0xca)) ||
                  ((iVar1 == 0xcd || (iVar1 == 0xdd)))) || ((iVar1 == 0xec || (iVar1 == 0xee)))) {
                puStack_11c = (undefined4 *)0x4be53d;
                puStack_11c = (undefined4 *)FUN_0045e2eb();
                iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
                piStack_124 = (int *)0x4be54c;
                FUN_00834a5f();
                goto LAB_004bdf6c;
              }
            }
            puStack_11c = (undefined4 *)0x0;
            iStack_120 = 500;
            piStack_124 = (int *)0x4be560;
            iVar1 = FUN_004becbc();
            if (iVar1 != 0) {
              *(int **)(unaff_EBP + -0x14) = piVar6 + 3;
              puStack_11c = (undefined4 *)0x4be56f;
              iVar1 = FUN_0045e2eb();
              if (iVar1 / 10000 == 0xdb) {
                puStack_11c = (undefined4 *)0x4be583;
                puStack_11c = (undefined4 *)FUN_0045e2eb();
                iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
                piStack_124 = (int *)0x4be592;
                FUN_0084afb7();
                goto LAB_004bdf6c;
              }
            }
            puStack_11c = (undefined4 *)0x0;
            iStack_120 = 500;
            piStack_124 = (int *)0x4be5a6;
            iVar1 = FUN_004becbc();
            if (iVar1 != 0) {
              *(int **)(unaff_EBP + -0x14) = piVar6 + 3;
              puStack_11c = (undefined4 *)0x4be5b5;
              iVar1 = FUN_0045e2eb();
              if (iVar1 / 10000 == 0xcb) {
                puStack_11c = (undefined4 *)0x4be5c9;
                puStack_11c = (undefined4 *)FUN_0045e2eb();
                iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
                piStack_124 = (int *)0x4be5d8;
                FUN_0084500a();
                goto LAB_004bdf6c;
              }
            }
            puStack_11c = (undefined4 *)0x0;
            iStack_120 = 500;
            piStack_124 = (int *)0x4be5ec;
            iVar1 = FUN_004becbc();
            if (iVar1 != 0) {
              *(int **)(unaff_EBP + -0x14) = piVar6 + 3;
              puStack_11c = (undefined4 *)0x4be5fb;
              iVar1 = FUN_0045e2eb();
              if (iVar1 / 10000 == 0xd2) {
                puStack_11c = (undefined4 *)0x4be60f;
                puStack_11c = (undefined4 *)FUN_0045e2eb();
                iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
                piStack_124 = (int *)0x4be61e;
                FUN_00834e65();
                goto LAB_004bdf6c;
              }
            }
            puStack_11c = (undefined4 *)0x0;
            iStack_120 = 1000;
            piStack_124 = (int *)0x4be632;
            iVar1 = FUN_004becbc();
            if ((iVar1 != 0) && (piVar6[6] != 0 || piVar6[7] != 0)) {
              *(int **)(unaff_EBP + -0x14) = piVar6 + 3;
              puStack_11c = (undefined4 *)0x4be649;
              puStack_11c = (undefined4 *)FUN_0045e2eb();
              iStack_120 = 0x4be64f;
              iVar1 = FUN_0048b567();
              if (iVar1 != 0) {
                puStack_11c = (undefined4 *)0x4be65c;
                iVar1 = FUN_0045e2eb();
                if (iVar1 / 10000 == 0x20c) {
                  puStack_11c = (undefined4 *)0x0;
                  iStack_120 = 0x4be672;
                  iStack_120 = FUN_0045e2eb();
                  piStack_124 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x14);
LAB_004be67c:
                  uStack_128 = 0x4be681;
                  FUN_00835c49();
                  goto LAB_004bdf6c;
                }
              }
            }
            puStack_11c = (undefined4 *)0x0;
            iStack_120 = 200;
            piStack_124 = (int *)0x4be691;
            iVar1 = FUN_004becbc();
            if (iVar1 != 0) {
              *(int **)(unaff_EBP + -0x14) = piVar6 + 3;
              puStack_11c = (undefined4 *)0x4be6a0;
              iVar1 = FUN_0045e2eb();
              if (iVar1 / 10000 == 0xd4) {
                puStack_11c = (undefined4 *)0x4be6b4;
                puStack_11c = (undefined4 *)FUN_0045e2eb();
                iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
                piStack_124 = (int *)0x4be6c3;
                FUN_00834fcc();
                goto LAB_004bdf6c;
              }
            }
            puStack_11c = (undefined4 *)0x0;
            iStack_120 = 200;
            piStack_124 = (int *)0x4be6d3;
            iVar1 = FUN_004becbc();
            if (iVar1 == 0) {
LAB_004be6f2:
              puStack_11c = (undefined4 *)0x0;
              iStack_120 = 200;
              piStack_124 = (int *)0x4be6fd;
              iVar1 = FUN_004becbc();
              if (iVar1 != 0) {
                *(int **)(unaff_EBP + -0x14) = piVar6 + 3;
                puStack_11c = (undefined4 *)0x4be70c;
                iVar1 = FUN_0045e2eb();
                if (iVar1 / 10000 == 0xe2) {
                  puStack_11c = (undefined4 *)0x4be720;
                  puStack_11c = (undefined4 *)FUN_0045e2eb();
                  iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
                  piStack_124 = (int *)0x4be72f;
                  FUN_00835128();
                  goto LAB_004bdf6c;
                }
              }
              puStack_11c = (undefined4 *)0x0;
              iStack_120 = 500;
              piStack_124 = (int *)0x4be743;
              iVar1 = FUN_004becbc();
              if (iVar1 != 0) {
                *(int **)(unaff_EBP + -0x14) = piVar6 + 3;
                puStack_11c = (undefined4 *)0x4be752;
                iVar1 = FUN_0045e2eb();
                if (iVar1 / 10000 == 0xe3) {
                  puStack_11c = (undefined4 *)0x4be766;
                  puStack_11c = (undefined4 *)FUN_0045e2eb();
                  iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
                  piStack_124 = (int *)0x4be775;
                  FUN_008351eb();
                  goto LAB_004bdf6c;
                }
              }
              puStack_11c = (undefined4 *)0x0;
              iStack_120 = 200;
              piStack_124 = (int *)0x4be785;
              iVar1 = FUN_004becbc();
              if (iVar1 != 0) {
                *(int **)(unaff_EBP + -0x14) = piVar6 + 3;
                puStack_11c = (undefined4 *)0x4be794;
                iVar1 = FUN_0045e2eb();
                if ((iVar1 / 10000 == 0xe4) || (iVar1 / 10000 == 0xe5)) {
                  puStack_11c = (undefined4 *)0x4be7af;
                  puStack_11c = (undefined4 *)FUN_0045e2eb();
                  iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
                  piStack_124 = (int *)0x4be7be;
                  FUN_008357b9();
                  goto LAB_004bdf6c;
                }
              }
              puStack_11c = (undefined4 *)0x0;
              iStack_120 = 200;
              piStack_124 = (int *)0x4be7ce;
              iVar1 = FUN_004becbc();
              if (iVar1 != 0) {
                *(int **)(unaff_EBP + -0x14) = piVar6 + 3;
                puStack_11c = (undefined4 *)0x4be7dd;
                iVar1 = FUN_0045e2eb();
                if (iVar1 / 10000 == 0xe7) {
                  puStack_11c = (undefined4 *)0x4be7f1;
                  puStack_11c = (undefined4 *)FUN_0045e2eb();
                  iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
                  piStack_124 = (int *)0x4be800;
                  FUN_00835869();
                  goto LAB_004bdf6c;
                }
              }
              puStack_11c = (undefined4 *)0x0;
              iStack_120 = 200;
              piStack_124 = (int *)0x4be810;
              iVar1 = FUN_004becbc();
              if (iVar1 != 0) {
                *(int **)(unaff_EBP + -0x14) = piVar6 + 3;
                puStack_11c = (undefined4 *)0x4be81f;
                iVar1 = FUN_0045e2eb();
                if (iVar1 / 10000 == 0xe8) {
                  puStack_11c = (undefined4 *)0x4be833;
                  puStack_11c = (undefined4 *)FUN_0045e2eb();
                  iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
                  piStack_124 = (int *)0x4be842;
                  FUN_008359c6();
                  goto LAB_004bdf6c;
                }
              }
              puStack_11c = (undefined4 *)0x0;
              iStack_120 = 200;
              piStack_124 = (int *)0x4be852;
              iVar1 = FUN_004becbc();
              if (iVar1 != 0) {
                *(int **)(unaff_EBP + -0x14) = piVar6 + 3;
                puStack_11c = (undefined4 *)0x4be861;
                iVar1 = FUN_0045e2eb();
                if (iVar1 / 10000 == 0xe0) goto LAB_004be86d;
              }
              puStack_11c = (undefined4 *)0x0;
              iStack_120 = 200;
              piStack_124 = (int *)0x4be894;
              iVar1 = FUN_004becbc();
              if (iVar1 != 0) {
                *(int **)(unaff_EBP + -0x14) = piVar6 + 3;
                puStack_11c = (undefined4 *)0x4be8a3;
                iVar1 = FUN_0045e2eb();
                if ((iVar1 / 10000 == 0x221) || (iVar1 / 10000 == 0xef)) {
                  puStack_11c = (undefined4 *)0x4be8be;
                  puStack_11c = (undefined4 *)FUN_0045e2eb();
                  iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
                  piStack_124 = (int *)0x4be8cd;
                  FUN_0083a97e();
                  goto LAB_004bdf6c;
                }
              }
              puStack_11c = (undefined4 *)0x0;
              iStack_120 = 200;
              piStack_124 = (int *)0x4be8dd;
              iVar1 = FUN_004becbc();
              if (iVar1 != 0) {
                puStack_11c = (undefined4 *)0x4be8ef;
                iVar1 = FUN_0045e2eb();
                if (iVar1 / 10000 == 0xed) {
                  puStack_11c = (undefined4 *)0x4be904;
                  puStack_11c = (undefined4 *)FUN_0045e2eb();
                  iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
                  piStack_124 = (int *)0x4be913;
                  FUN_0083ceea();
                }
              }
            }
            else {
              *(int **)(unaff_EBP + -0x14) = piVar6 + 3;
              puStack_11c = (undefined4 *)0x4be6e2;
              iVar1 = FUN_0045e2eb();
              if (iVar1 / 10000 != 0xe0) goto LAB_004be6f2;
LAB_004be86d:
              puStack_11c = (undefined4 *)0x4be875;
              puStack_11c = (undefined4 *)FUN_0045e2eb();
              iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
              piStack_124 = (int *)0x4be884;
              FUN_0083a768();
            }
          }
          else {
            *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_12c;
            uStack_130 = 0xd12;
            puStack_12c = extraout_ECX_02;
LAB_004be47d:
            puStack_11c = (undefined4 *)0x0;
            iStack_120 = 0;
            piStack_124 = (int *)0x0;
            uStack_128 = 0;
            ppuStack_134 = &puStack_12c;
            FUN_00679d22();
            uStack_130 = 0x4be48d;
            FUN_007db3ad();
          }
        }
      }
      else if (iVar1 == 3) {
        puStack_11c = (undefined4 *)0x0;
        iStack_120 = 200;
        piStack_124 = (int *)0x4be415;
        iVar1 = FUN_004becbc();
        if (iVar1 != 0) {
          puStack_11c = (undefined4 *)0x4be427;
          iVar1 = FUN_0045e2eb();
          if (iVar1 / 10000 == 0x12d) {
            puStack_11c = (undefined4 *)0x4be441;
            puStack_11c = (undefined4 *)FUN_0045e2eb();
            iStack_120 = *(undefined4 *)(extraout_ECX + 0x14);
            piStack_124 = (int *)0x4be44c;
            FUN_0083a4ad();
          }
        }
      }
      else if (iVar1 == 4) {
        puStack_11c = (undefined4 *)0x4be0c7;
        puStack_11c = (undefined4 *)FUN_004bed04();
        if (puStack_11c == (undefined4 *)0x0) {
          iStack_120 = 500;
          piStack_124 = (int *)0x4be0dc;
          iVar1 = FUN_004becbc();
          if (iVar1 != 0) {
            puStack_11c = (undefined4 *)0x4be0ed;
            iVar1 = FUN_0045e2eb();
            if (iVar1 / 10000 == 0x198) {
              puStack_11c = (undefined4 *)0x4be101;
              puStack_11c = (undefined4 *)FUN_0045e2eb();
              iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
              piStack_124 = (int *)0x4be10f;
              FUN_00844394();
            }
          }
          *(int **)(unaff_EBP + -0x14) = piVar6 + 3;
          puStack_11c = (undefined4 *)0x4be11a;
          iVar1 = FUN_0045e2eb();
          if (iVar1 / 10000 == 0x1a0) {
            puStack_11c = (undefined4 *)0x4be12e;
            puStack_11c = (undefined4 *)FUN_0045e2eb();
            iStack_120 = 0x4be136;
            FUN_0083aefd();
          }
          else {
            puStack_11c = (undefined4 *)0x0;
            iStack_120 = 200;
            piStack_124 = (int *)0x4be14b;
            iVar1 = FUN_004becbc();
            if (iVar1 != 0) {
              puStack_11c = (undefined4 *)0x4be157;
              iVar1 = FUN_0045e2eb();
              if ((iVar1 == 0x3d8391) || (iVar1 == 0x3d83a3)) {
                puStack_11c = (undefined4 *)0x4be16d;
                puStack_11c = (undefined4 *)FUN_0045e2eb();
                iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
                piStack_124 = (int *)0x4be17c;
                FUN_0083aaa1();
                goto LAB_004bdf6c;
              }
            }
            puStack_11c = (undefined4 *)0x0;
            iStack_120 = 200;
            piStack_124 = (int *)0x4be18c;
            iVar1 = FUN_004becbc();
            if (iVar1 != 0) {
              puStack_11c = (undefined4 *)0x4be198;
              iVar1 = FUN_0045e2eb();
              if ((iVar1 == 0x3d83ae) || (iVar1 == 0x3d83af)) {
                puStack_11c = (undefined4 *)0x4be1ae;
                puStack_11c = (undefined4 *)FUN_0045e2eb();
                iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
                piStack_124 = (int *)0x4be1bd;
                FUN_0083ace6();
                goto LAB_004bdf6c;
              }
            }
            puStack_11c = (undefined4 *)0x4be1ca;
            iVar1 = FUN_0045e2eb();
            if (iVar1 / 1000 == 0x107c) {
              puStack_11c = (undefined4 *)0x4be1e1;
              puStack_11c = (undefined4 *)FUN_0045e2eb();
              iStack_120 = 0x4be1ea;
              FUN_0083c98e();
            }
            else {
              puStack_11c = (undefined4 *)0x4be1f4;
              iVar1 = FUN_0045e2eb();
              if (iVar1 / 10000 == 0x1ac) {
                puStack_11c = (undefined4 *)0x4be208;
                puStack_11c = (undefined4 *)FUN_0045e2eb();
                iStack_120 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
                piStack_124 = (int *)0x4be217;
                FUN_0083c9a0();
              }
              else {
                puStack_11c = (undefined4 *)0x0;
                iStack_120 = 200;
                piStack_124 = (int *)0x4be227;
                iVar1 = FUN_004becbc();
                if (iVar1 != 0) {
                  puStack_11c = (undefined4 *)0x4be237;
                  iVar1 = FUN_0045e2eb();
                  puStack_11c = (undefined4 *)0x2710;
                  if (iVar1 / 10000 == 0x1a1) {
                    if (DAT_00979178 == 0) {
                      iVar1 = *(int *)(unaff_EBP + -0x24);
                      *(undefined4 *)(unaff_EBP + -0x10) = 1;
                      do {
                        iVar3 = *(int *)(iVar1 + 0x3f7);
                        if (iVar3 == 0) {
                          iVar3 = 0;
                        }
                        else {
                          iVar3 = *(int *)(iVar3 + -4);
                        }
                        if (iVar3 + -1 < *(int *)(unaff_EBP + -0x10)) {
                          *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_12c;
                          uStack_130 = 0x10d5;
                          puStack_12c = (undefined1 *)puStack_11c;
                          goto LAB_004be47d;
                        }
                        puStack_11c = *(undefined4 **)(unaff_EBP + -0x10);
                        piStack_124 = (int *)(unaff_EBP + -0x20);
                        iStack_120 = 5;
                        uStack_128 = 0x4be2bb;
                        FUN_00458c4f();
                        *(undefined4 *)(unaff_EBP + -4) = 7;
                        puStack_11c = (undefined4 *)extraout_ECX_00;
                        if (*(int *)(unaff_EBP + -0x1c) != 0) {
                          puStack_11c = (undefined4 *)0x4be2d1;
                          puStack_11c = (undefined4 *)FUN_0045e2eb();
                          iStack_120 = 0x4be2d7;
                          iVar3 = FUN_0048b567();
                          if (iVar3 == 0x1a) goto LAB_004be2f7;
                        }
                        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                        if (*(int *)(unaff_EBP + -0x1c) != 0) {
                          puStack_11c = (undefined4 *)0x0;
                          iStack_120 = 0x4be2ef;
                          FUN_00449913();
                          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
                          puStack_11c = (undefined4 *)extraout_ECX_01;
                        }
                        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
                      } while( true );
                    }
                    puStack_11c = (undefined4 *)0x9a;
                    iStack_120 = unaff_EBP + -0x44;
                    piStack_124 = (int *)0x4be264;
                    iStack_120 = FUN_00679d22();
                    puStack_11c = (undefined4 *)0xc;
                    *(undefined4 *)(unaff_EBP + -4) = 6;
                    piStack_124 = (int *)0x4be273;
                    FUN_00471102();
                    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                    puStack_11c = (undefined4 *)0x4be281;
                    FUN_00414ebb();
                    goto LAB_004bdf6c;
                  }
                }
                puStack_11c = (undefined4 *)0x4be3de;
                iVar1 = FUN_0045e2eb();
                if (iVar1 / 10000 == 0x1ad) {
                  puStack_11c = (undefined4 *)0x4be3fa;
                  puStack_11c = (undefined4 *)FUN_0045e2eb();
                  iStack_120 = 0x4be402;
                  FUN_0084951d();
                }
              }
            }
          }
        }
      }
      else if (iVar1 == 5) {
        puStack_11c = (undefined4 *)0x0;
        iStack_120 = 500;
        piStack_124 = (int *)0x4be01c;
        iVar1 = FUN_004becbc();
        if (iVar1 != 0) {
          *(int **)(unaff_EBP + -0x14) = piVar6 + 3;
          puStack_11c = (undefined4 *)0x4be02f;
          puStack_11c = (undefined4 *)FUN_0045e2eb();
          iStack_120 = 0x4be035;
          iVar1 = FUN_0048b5b3();
          if ((iVar1 < 8) || ((0xb < iVar1 && (iVar1 != 0x25)))) {
            iVar1 = 0;
          }
          if (iVar1 == 0) {
            puStack_11c = (undefined4 *)0x4be073;
            puStack_11c = (undefined4 *)FUN_0045e2eb();
            iStack_120 = 0x4be079;
            iVar1 = FUN_0048b567();
            if (iVar1 != 0) {
              puStack_11c = (undefined4 *)0x0;
              iStack_120 = 0x4be087;
              iStack_120 = FUN_0045e2eb();
              piStack_124 = *(int **)(extraout_ECX + 0x14);
              goto LAB_004be67c;
            }
            puStack_11c = (undefined4 *)0x4be099;
            puStack_11c = (undefined4 *)FUN_0045e2eb();
            iStack_120 = 0x4be09f;
            iVar1 = FUN_0048b8d9();
            if (iVar1 != 0) {
              puStack_11c = (undefined4 *)0x4be0af;
              puStack_11c = (undefined4 *)FUN_0045e2eb();
              iStack_120 = *(undefined4 *)(extraout_ECX + 0x14);
              piStack_124 = (int *)0x4be0ba;
              FUN_00844b21();
            }
          }
          else {
            puStack_11c = (undefined4 *)0x4be053;
            piStack_124 = (int *)FUN_0045e2eb();
            puStack_11c = (undefined4 *)piVar6[7];
            iStack_120 = piVar6[6];
            uStack_128 = *(undefined4 *)(extraout_ECX + 0x14);
            puStack_12c = (undefined1 *)0x4be064;
            FUN_00844b67();
          }
        }
      }
    }
  }
  goto LAB_004bdf6c;
LAB_004be2f7:
  puStack_11c = (undefined4 *)0x0;
  iStack_120 = 0;
  piStack_124 = (int *)0x49;
  uStack_128 = 0x4be303;
  FUN_0060142b();
  puStack_11c = *(undefined4 **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_120 = 0x4be312;
  FUN_0045d247();
  puStack_11c = (undefined4 *)0x4be31d;
  puStack_11c = (undefined4 *)FUN_0045e2eb();
  iStack_120 = 0x4be326;
  FUN_00457d37();
  uVar4 = -(uint)(DAT_009791a4 != 0) & DAT_009791a4 + 8U;
  *(uint *)(unaff_EBP + -0x28) = -(uint)(uVar4 != 0) & uVar4 - 8;
  puStack_11c = (undefined4 *)0x4be34a;
  FUN_004c2691();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    puStack_11c = (undefined4 *)0x590;
    iStack_120 = 0x4be362;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x24) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (iVar1 != 0) {
      puStack_11c = *(undefined4 **)(*(int *)(unaff_EBP + -0x18) + 0x14);
      iStack_120 = 4;
      *(undefined1 ****)(unaff_EBP + -0x30) = &ppuStack_134;
      piStack_124 = piVar6;
      FUN_004bee08(unaff_EBP + -0x54);
      FUN_006bef4f();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_11c = (undefined4 *)0x4be39b;
  FUN_004c26ae();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_11c = (undefined4 *)0x4be3a7;
  FUN_0045ebca();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    puStack_11c = (undefined4 *)0x0;
    iStack_120 = 0x4be3bd;
    FUN_00449913();
  }
LAB_004bdf6c:
  uVar2 = 0;
LAB_004becad:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


