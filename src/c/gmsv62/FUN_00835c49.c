/* FUN_00835c49 - 0x00835c49 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_00835c49(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *extraout_ECX_02;
  char *extraout_ECX_03;
  char *extraout_ECX_04;
  char *extraout_ECX_05;
  char *extraout_ECX_06;
  char *extraout_ECX_07;
  char *extraout_ECX_08;
  char *extraout_ECX_09;
  char *extraout_ECX_10;
  char *extraout_ECX_11;
  char *extraout_ECX_12;
  char *extraout_ECX_13;
  char *extraout_ECX_14;
  char *extraout_ECX_15;
  char *extraout_ECX_16;
  char *extraout_ECX_17;
  char *extraout_ECX_18;
  char *extraout_ECX_19;
  char *extraout_ECX_20;
  char *extraout_ECX_21;
  char *extraout_ECX_22;
  char *extraout_ECX_23;
  char *extraout_ECX_24;
  char *extraout_ECX_25;
  char *extraout_ECX_26;
  int unaff_EBP;
  char *pcVar10;
  char **ppcStack_3b0;
  int iStack_3ac;
  char *pcStack_3a8;
  undefined1 *puStack_3a4;
  int iStack_3a0;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x58) = extraout_ECX;
  iVar3 = FUN_00429303();
  *(int *)(unaff_EBP + -0x30) = iVar3;
  if (iVar3 == 0) goto LAB_00839974;
  iStack_3a0 = 0x835c7f;
  iVar3 = FUN_004becbc();
  if (iVar3 == 0) {
    iStack_3a0 = 0;
    puStack_3a4 = (undefined1 *)0x0;
    ppcStack_3b0 = &pcStack_3a8;
    *(char ***)(unaff_EBP + 0xc) = &pcStack_3a8;
    iStack_3ac = 0x137;
    FUN_00679d22();
    iStack_3ac = 0x835ca2;
    FUN_007db3ad();
    goto LAB_00839974;
  }
  iStack_3a0 = 0x49;
  puStack_3a4 = (undefined1 *)0x835cb4;
  FUN_0060142b();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0045d247();
  FUN_00457d37();
  pcVar7 = *(char **)(unaff_EBP + 0xc);
  uVar4 = FUN_0048b567();
  *(undefined4 *)(unaff_EBP + -0x48) = uVar4;
  switch(uVar4) {
  case 0xc:
  case 0xd:
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x48) == 0xd) {
      iVar3 = FUN_004029b9();
      *(int *)(unaff_EBP + 0xc) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00839b36();
      }
      uVar6 = -(uint)(iVar3 != 0) & iVar3 + 8U;
      *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar6 != 0) & uVar6 - 8;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0083e0dc();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar3 = FUN_004bc6a2();
      if (iVar3 == 1) {
        iStack_3a0 = 0x835d84;
        FUN_0069af83();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_0083e0f9();
LAB_00835e7f:
        iStack_3a0 = 0x835e89;
        FUN_0045ed72();
        puVar5 = (undefined4 *)FUN_0045ee27();
        if (((char *)*puVar5 != (char *)0x0) && (*(char *)*puVar5 != '\0')) {
          *(undefined4 *)(unaff_EBP + 0x10) = 0;
          FUN_00414f8b();
          iStack_3a0 = 1;
          puStack_3a4 = (undefined1 *)0x400;
          *(undefined1 *)(unaff_EBP + -4) = 8;
          pcStack_3a8 = (char *)0x835ec5;
          iStack_3a0 = FUN_00415015();
          puStack_3a4 = (undefined1 *)0x835ecb;
          uVar4 = FUN_00471777();
          *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
          FUN_004150c0();
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            *(char ***)(unaff_EBP + 0xc) = &pcStack_3a8;
            iStack_3ac = 0x11d;
            pcStack_3a8 = extraout_ECX_00;
          }
          else {
            FUN_00455c59();
            *(undefined1 *)(unaff_EBP + -4) = 9;
            iStack_3a0 = 0x835f16;
            bVar1 = FUN_0045f03e();
            *(char *)(unaff_EBP + 0xf) = '\x01' - (10 < bVar1);
            *(undefined1 *)(unaff_EBP + -4) = 8;
            FUN_0045e4a2();
            if (*(char *)(unaff_EBP + 0xf) == '\0') {
              iVar3 = *(int *)(unaff_EBP + 8);
              if (iVar3 == 0) {
                pcVar7 = (char *)0x0;
              }
              else {
                pcVar7 = *(char **)(iVar3 + -4);
              }
              if (0x50 < (int)pcVar7) {
                *(undefined1 *)(unaff_EBP + -4) = 1;
                if (*(int *)(unaff_EBP + 0x10) != 0) {
                  FUN_00434e38();
                  iVar3 = *(int *)(unaff_EBP + 8);
                }
                *(undefined1 *)(unaff_EBP + -4) = 0;
                goto LAB_00837065;
              }
              if (iVar3 == 0) {
                iVar3 = 0;
              }
              else {
                iVar3 = *(int *)(iVar3 + -4);
              }
              if (iVar3 < 0x3d) {
                *(undefined1 **)(unaff_EBP + 0xc) = &stack0xfffffc68;
                iStack_3a0 = 0x835fd9;
                FUN_00414f8b();
                FUN_00459cb5();
                if (*(int *)(unaff_EBP + -0x48) == 0xd) {
                  FUN_00457cda();
                }
                *(undefined1 *)(unaff_EBP + -4) = 1;
                if (*(int *)(unaff_EBP + 0x10) != 0) {
                  FUN_00434e38();
                }
                iVar3 = *(int *)(unaff_EBP + 8);
                *(undefined1 *)(unaff_EBP + -4) = 0;
                goto LAB_0083600d;
              }
              *(char ***)(unaff_EBP + 0xc) = &pcStack_3a8;
              iStack_3ac = 0x11e;
              pcStack_3a8 = pcVar7;
            }
            else {
              *(char ***)(unaff_EBP + 0xc) = &pcStack_3a8;
              iStack_3ac = 0xe58;
              pcStack_3a8 = extraout_ECX_01;
            }
          }
          iStack_3a0 = 0;
          puStack_3a4 = (undefined1 *)0x0;
          ppcStack_3b0 = &pcStack_3a8;
          FUN_00679d22();
          iStack_3ac = 0x835fa7;
          FUN_007db3ad();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int *)(unaff_EBP + 0x10) != 0) {
            FUN_00434e38();
          }
        }
      }
      else {
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_0083e0f9();
      }
    }
    else {
      iVar3 = FUN_004029b9();
      *(int *)(unaff_EBP + 0xc) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_007e62e9();
      }
      uVar6 = -(uint)(iVar3 != 0) & iVar3 + 8U;
      *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar6 != 0) & uVar6 - 8;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_004c26c4();
      pcStack_3a8 = (char *)&iStack_3a0;
      *(int **)(unaff_EBP + 0xc) = &iStack_3a0;
      puStack_3a4 = (undefined1 *)0x11c;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_3ac = 0x835df6;
      FUN_00679d22();
      puStack_3a4 = (undefined1 *)0x0;
      pcStack_3a8 = (char *)0x3;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_3ac = 0x835e05;
      FUN_004c2677();
      iStack_3ac = 0x835e0c;
      FUN_007eddac();
      iStack_3a0 = 0x3c;
      puStack_3a4 = (undefined1 *)0x0;
      pcStack_3a8 = (char *)0x0;
      iStack_3ac = 0x835e1a;
      FUN_007edfe1();
      FUN_007e6e3c();
      iVar3 = FUN_004bc6a2();
      if (iVar3 == 1) {
        FUN_00641b6c();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (*(int *)(unaff_EBP + -0x164) != 0) {
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_004c26e1();
        goto LAB_00835e7f;
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_004c26e1();
    }
    iVar3 = *(int *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    goto LAB_00837065;
  case 0xe:
    if (DAT_00979178 == 0) {
      iVar3 = FUN_004029b9();
      *(int *)(unaff_EBP + 0x10) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (iVar3 != 0) {
        iStack_3a0 = 0x83605a;
        FUN_0055e0ea();
      }
    }
    goto LAB_00837373;
  case 0xf:
    if ((((*(int *)(*(int *)(unaff_EBP + -0x30) + 0x20) == 0) &&
         (iVar3 = FUN_00839aab(), pcVar7 = extraout_ECX_05, iVar3 == 0)) &&
        (iVar3 = (**(code **)(**(int **)(unaff_EBP + -0x30) + 0x1c))(), pcVar7 = extraout_ECX_06,
        iVar3 != 0x3c)) && ((*(byte *)(*(int *)(unaff_EBP + -0x30) + 0x109) & 0x40) == 0)) {
      iStack_3a0 = 0x83687c;
      FUN_004497f5();
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      if (*(int *)(unaff_EBP + 0x10) != 0) {
        iVar3 = FUN_004029b9();
        *(int *)(unaff_EBP + 0xc) = iVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_007e62e9();
        }
        uVar6 = -(uint)(iVar3 != 0) & iVar3 + 8U;
        *(uint *)(unaff_EBP + -0x48) = -(uint)(uVar6 != 0) & uVar6 - 8;
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        FUN_004c26c4();
        pcStack_3a8 = (char *)&iStack_3a0;
        *(int **)(unaff_EBP + 0xc) = &iStack_3a0;
        puStack_3a4 = (undefined1 *)0x305;
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        iStack_3ac = 0x8368ee;
        FUN_00679d22();
        puStack_3a4 = (undefined1 *)0x0;
        pcStack_3a8 = (char *)0x3;
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        iStack_3ac = 0x8368fd;
        FUN_004c2677();
        iStack_3ac = 0x836904;
        FUN_007eddac();
        iStack_3a0 = 0x23;
        puStack_3a4 = (undefined1 *)0x0;
        pcStack_3a8 = (char *)0x0;
        iStack_3ac = 0x836912;
        FUN_007edfe1();
        FUN_007e6e3c();
        iVar3 = FUN_004bc6a2();
        if (iVar3 == 1) {
          FUN_00641b6c();
          *(undefined1 *)(unaff_EBP + -4) = 0x2e;
          iStack_3a0 = 0x836944;
          FUN_0045ed72();
          puVar5 = (undefined4 *)FUN_0045ee27();
          if (((char *)*puVar5 != (char *)0x0) && (*(char *)*puVar5 != '\0')) {
            iStack_3a0 = 1;
            puStack_3a4 = (undefined1 *)0x400;
            pcStack_3a8 = (char *)0x836965;
            iStack_3a0 = FUN_00415015();
            puStack_3a4 = (undefined1 *)0x83696b;
            uVar4 = FUN_00471777();
            *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
            FUN_004150c0();
            if (*(int *)(unaff_EBP + 0xc) != 0) {
              *(undefined1 **)(unaff_EBP + 0xc) = &stack0xfffffc68;
              iStack_3a0 = 0x8369d6;
              FUN_00414f8b();
              FUN_00459cb5();
              *(undefined1 *)(unaff_EBP + -4) = 0x2c;
              if (*(int *)(unaff_EBP + 8) != 0) {
                FUN_00434e38();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x2a;
              FUN_004c26e1();
              *(undefined1 *)(unaff_EBP + -4) = 0;
              goto LAB_00837223;
            }
            iStack_3a0 = 0;
            puStack_3a4 = (undefined1 *)0x0;
            ppcStack_3b0 = &pcStack_3a8;
            *(char ***)(unaff_EBP + 0xc) = &pcStack_3a8;
            iStack_3ac = 0x11d;
            pcStack_3a8 = extraout_ECX_07;
            FUN_00679d22();
            iStack_3ac = 0x83699c;
            FUN_007db3ad();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          if (*(int *)(unaff_EBP + 8) != 0) {
            FUN_00434e38();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        FUN_004c26e1();
      }
      goto LAB_0083736e;
    }
    *(char ***)(unaff_EBP + 0xc) = &pcStack_3a8;
    pcStack_3a8 = pcVar7;
LAB_0083724a:
    iStack_3a0 = 0;
    puStack_3a4 = (undefined1 *)0x0;
    ppcStack_3b0 = &pcStack_3a8;
    iStack_3ac = 0x11f;
    FUN_00679d22();
LAB_0083725a:
    iStack_3ac = 0x83725f;
    FUN_007db3ad();
    goto LAB_00837373;
  case 0x10:
    FUN_00455c59();
    FUN_0045e4a2();
    iVar3 = FUN_00458d2b();
    if (iVar3 != 0) {
      *(undefined4 *)(unaff_EBP + -0x48) = DAT_00973a94;
      FUN_0045e2eb();
      iStack_3a0 = 0x836a59;
      FUN_0045a1d8();
      pcVar7 = DAT_00980dfc;
      pcVar10 = (char *)(iVar3 + 0x28);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      *(char **)(unaff_EBP + -0x48) = pcVar10;
      if (pcVar10 == (char *)0x0) {
        pcVar10 = pcVar7;
      }
      iStack_3a0 = 0x836a7f;
      iVar3 = FUN_008858f0();
      if (iVar3 == 0) {
LAB_00836abe:
        iVar3 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x38) = iVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_007e62e9();
        }
        uVar6 = -(uint)(iVar3 != 0) & iVar3 + 8U;
        *(uint *)(unaff_EBP + -0x50) = -(uint)(uVar6 != 0) & uVar6 - 8;
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        FUN_004c26c4();
        pcStack_3a8 = (char *)&iStack_3a0;
        *(int **)(unaff_EBP + -0x38) = &iStack_3a0;
        puStack_3a4 = (undefined1 *)0x307;
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        iStack_3ac = 0x836b1f;
        FUN_00679d22();
        puStack_3a4 = (undefined1 *)0x0;
        pcStack_3a8 = (char *)0x3;
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        iStack_3ac = 0x836b2e;
        FUN_004c2677();
        iStack_3ac = 0x836b35;
        FUN_007eddac();
        iStack_3a0 = 0xc;
        puStack_3a4 = (undefined1 *)0x4;
        pcStack_3a8 = (char *)0x0;
        iStack_3ac = 0x836b44;
        FUN_007edfe1();
        FUN_007e6e3c();
        iVar3 = FUN_004bc6a2();
        if (iVar3 == 1) {
          FUN_00641b6c();
          *(undefined1 *)(unaff_EBP + -4) = 0x33;
          iStack_3a0 = 0x836b76;
          FUN_0045ed72();
          puVar5 = (undefined4 *)FUN_0045ee27();
          if (((char *)*puVar5 != (char *)0x0) && (*(char *)*puVar5 != '\0')) {
            iStack_3a0 = 1;
            puStack_3a4 = (undefined1 *)0x400;
            pcStack_3a8 = (char *)0x836b9f;
            iStack_3a0 = FUN_00415015();
            puStack_3a4 = (undefined1 *)0x836ba5;
            uVar4 = FUN_00471777();
            *(undefined4 *)(unaff_EBP + -0x40) = uVar4;
            FUN_004150c0();
            if (*(int *)(unaff_EBP + -0x40) == 0) {
              *(char ***)(unaff_EBP + -0x38) = &pcStack_3a8;
              iStack_3ac = 0x11d;
              pcStack_3a8 = extraout_ECX_08;
            }
            else {
              pcVar7 = *(char **)(unaff_EBP + 0xc);
              if (*(char **)(unaff_EBP + 0xc) == (char *)0x0) {
                pcVar7 = DAT_00980dfc;
              }
              iStack_3a0 = 0x836beb;
              iVar3 = FUN_008858f0();
              if (iVar3 != 0) {
                pcVar7 = *(char **)(unaff_EBP + -0x48);
                if (*(char **)(unaff_EBP + -0x48) == (char *)0x0) {
                  pcVar7 = DAT_00980dfc;
                }
                pcVar10 = DAT_00980dfc;
                if (*(int *)(unaff_EBP + 0xc) != 0) {
                  pcVar10 = *(char **)(unaff_EBP + 0xc);
                }
                iStack_3a0 = 0x836c12;
                iVar3 = _strcmp(pcVar10,pcVar7);
                if (iVar3 != 0) {
                  *(undefined4 *)(unaff_EBP + 0x10) = 0;
                  *(undefined1 *)(unaff_EBP + -4) = 0x34;
                  iStack_3a0 = 0x836c33;
                  FUN_00679d22();
                  iStack_3a0 = unaff_EBP + 0x10;
                  *(undefined1 *)(unaff_EBP + -4) = 0x35;
                  puStack_3a4 = (undefined1 *)0x836c46;
                  FUN_00434e21();
                  *(undefined1 *)(unaff_EBP + -4) = 0x34;
                  pcVar7 = extraout_ECX_09;
                  if (*(int *)(unaff_EBP + -0x78) != 0) {
                    pcVar7 = (char *)(*(int *)(unaff_EBP + -0x78) + -0xc);
                    FUN_00434e38();
                  }
                  iStack_3a0 = 0;
                  puStack_3a4 = (undefined1 *)0x0;
                  iStack_3ac = unaff_EBP + 0x10;
                  *(char ***)(unaff_EBP + -0x38) = &pcStack_3a8;
                  ppcStack_3b0 = (char **)0x836c71;
                  pcStack_3a8 = pcVar7;
                  FUN_00450368();
                  iStack_3ac = 0x836c76;
                  iVar3 = FUN_007db791();
                  if (iVar3 == 6) {
                    *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
                    iStack_3a0 = 0x836cca;
                    FUN_00414f8b();
                    FUN_00459cb5();
                    *(undefined1 *)(unaff_EBP + -4) = 0x33;
                    if (*(int *)(unaff_EBP + 0x10) != 0) {
                      FUN_00434e38();
                    }
                    *(undefined1 *)(unaff_EBP + -4) = 0x31;
                    if (*(int *)(unaff_EBP + 0xc) != 0) {
                      FUN_00434e38();
                    }
                    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
                    FUN_004c26e1();
                    iVar3 = *(int *)(unaff_EBP + 8);
                    *(undefined1 *)(unaff_EBP + -4) = 0;
                    goto LAB_0083600d;
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0x33;
                  if (*(int *)(unaff_EBP + 0x10) != 0) {
                    FUN_00434e38();
                  }
                  goto LAB_00836c93;
                }
              }
              *(char ***)(unaff_EBP + -0x38) = &pcStack_3a8;
              iStack_3ac = 0x308;
              pcStack_3a8 = pcVar7;
            }
            iStack_3a0 = 0;
            puStack_3a4 = (undefined1 *)0x0;
            ppcStack_3b0 = &pcStack_3a8;
            FUN_00679d22();
            iStack_3ac = 0x836d2f;
            FUN_007db3ad();
          }
LAB_00836c93:
          *(undefined1 *)(unaff_EBP + -4) = 0x31;
          if (*(int *)(unaff_EBP + 0xc) != 0) {
            FUN_00434e38();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        FUN_004c26e1();
      }
      else {
        iStack_3a0 = 0;
        puStack_3a4 = (undefined1 *)0x0;
        ppcStack_3b0 = &pcStack_3a8;
        *(char ***)(unaff_EBP + -0x38) = &pcStack_3a8;
        iStack_3ac = 0x306;
        pcStack_3a8 = pcVar10;
        FUN_00679d22();
        iStack_3ac = 0x836aa6;
        iVar3 = FUN_007db791();
        if (iVar3 == 6) goto LAB_00836abe;
      }
      iVar3 = *(int *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_00837065;
    }
    goto LAB_00837373;
  case 0x11:
    if (DAT_00979178 == 0) {
      iStack_3a0 = 0x836d83;
      FUN_004497f5();
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      if (*(int *)(unaff_EBP + 8) != 0) {
        iVar3 = FUN_0083cbf6();
        if (iVar3 / 10000000 == 0x5b) {
          iStack_3a0 = 0x836dbc;
          FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 0x38;
          iStack_3a0 = 0x836dc8;
          FUN_00471102();
          iVar3 = *(int *)(unaff_EBP + -0x80);
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          *(undefined4 *)(unaff_EBP + -0x30) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          iVar3 = FUN_004029b9();
          *(int *)(unaff_EBP + -0x38) = iVar3;
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_006964c8();
          }
          uVar6 = -(uint)(iVar3 != 0) & iVar3 + 8U;
          *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar6 != 0) & uVar6 - 8;
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          FUN_0083e1a8();
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          iVar3 = FUN_004bc6a2();
          if (iVar3 == 1) {
            iStack_3a0 = unaff_EBP + -0x14;
            puStack_3a4 = (undefined1 *)0x836e56;
            FUN_00696abd();
            FUN_0083e1c5();
            iStack_3a0 = 0x836e6f;
            FUN_0083d279();
            *(undefined1 *)(unaff_EBP + -4) = 0x3e;
            iStack_3a0 = 0x836e85;
            FUN_0045e02d();
            *(undefined1 *)(unaff_EBP + -4) = 0x3f;
            iStack_3a0 = 0x836e99;
            FUN_0083d279();
            *(undefined1 *)(unaff_EBP + -4) = 0x40;
            iStack_3a0 = 0x836eac;
            FUN_0045e02d();
            *(undefined1 *)(unaff_EBP + -4) = 0x44;
            if (*(int *)(unaff_EBP + -0x110) != 0) {
              FUN_00434e38();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x43;
            if (*(int *)(unaff_EBP + -0x88) != 0) {
              FUN_00434e38();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x42;
            if (*(int *)(unaff_EBP + -0x158) != 0) {
              FUN_00434e38();
            }
            iStack_3a0 = 1;
            puStack_3a4 = (undefined1 *)0x400;
            pcStack_3a8 = (char *)0x836f04;
            iStack_3a0 = FUN_00415015();
            puStack_3a4 = (undefined1 *)0x836f0a;
            iVar3 = FUN_00471777();
            FUN_004150c0();
            if (iVar3 != 0) {
              *(undefined1 **)(unaff_EBP + 0xc) = &stack0xfffffc68;
              iStack_3a0 = 0x836fbd;
              FUN_00414f8b();
              FUN_00459cb5();
              *(undefined1 *)(unaff_EBP + -4) = 0x3d;
              if (*(int *)(unaff_EBP + 0x10) != 0) {
                FUN_00434e38();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x3b;
              FUN_0083e1c5();
              *(undefined1 *)(unaff_EBP + -4) = 0x3a;
              if (*(int *)(unaff_EBP + -0x30) != 0) {
                FUN_00434e38();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x39;
              if (*(int *)(unaff_EBP + -0x10) != 0) {
                FUN_00434e38();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x37;
              if (*(int *)(unaff_EBP + -0x14) != 0) {
                FUN_00434e38();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0;
              goto LAB_00837223;
            }
            iStack_3a0 = 0;
            puStack_3a4 = (undefined1 *)0x0;
            ppcStack_3b0 = &pcStack_3a8;
            *(char ***)(unaff_EBP + 0xc) = &pcStack_3a8;
            iStack_3ac = 0x11d;
            pcStack_3a8 = extraout_ECX_10;
            FUN_00679d22();
            iStack_3ac = 0x836f40;
            FUN_007db3ad();
            *(undefined1 *)(unaff_EBP + -4) = 0x3d;
            if (*(int *)(unaff_EBP + 0x10) != 0) {
              FUN_00434e38();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          FUN_0083e1c5();
          *(undefined1 *)(unaff_EBP + -4) = 0x3a;
          if (*(int *)(unaff_EBP + -0x30) != 0) {
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x39;
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            FUN_00434e38();
          }
          iVar3 = *(int *)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
        }
        if (iVar3 != 0) {
          FUN_00434e38();
        }
      }
      goto LAB_0083736e;
    }
    iStack_3a0 = 0x836d55;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    iStack_3a0 = 0x836d61;
    FUN_00471102();
    iVar3 = *(int *)(unaff_EBP + -0x170);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    goto LAB_00837065;
  case 0x12:
    if (DAT_00979178 == 0) {
      if ((DAT_00978358 == 0) || (iVar3 = FUN_00839a5f(), 0xf < iVar3)) {
        iStack_3a0 = 0x8370bd;
        FUN_004497f5();
        *(undefined1 *)(unaff_EBP + -4) = 0x46;
        if (*(int *)(unaff_EBP + 8) != 0) {
          iVar3 = FUN_004029b9();
          *(int *)(unaff_EBP + 0xc) = iVar3;
          *(undefined1 *)(unaff_EBP + -4) = 0x47;
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_007e62e9();
          }
          uVar6 = -(uint)(iVar3 != 0) & iVar3 + 8U;
          *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar6 != 0) & uVar6 - 8;
          *(undefined1 *)(unaff_EBP + -4) = 0x46;
          FUN_004c26c4();
          *(undefined4 *)(unaff_EBP + 0x10) = 0;
          puStack_3a4 = &stack0xfffffc64;
          *(undefined1 **)(unaff_EBP + 0xc) = &stack0xfffffc64;
          iStack_3a0 = 0x348;
          *(undefined1 *)(unaff_EBP + -4) = 0x49;
          pcStack_3a8 = (char *)0x837131;
          FUN_00679e4e();
          iStack_3a0 = unaff_EBP + -0x1e4;
          *(undefined1 *)(unaff_EBP + -4) = 0x49;
          puStack_3a4 = (undefined1 *)0x837144;
          FUN_0040263d();
          puStack_3a4 = (undefined1 *)0x83714b;
          uVar4 = FUN_004048a4();
          *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
          iStack_3a0 = unaff_EBP + -0x118;
          *(undefined1 *)(unaff_EBP + -4) = 0x4b;
          puStack_3a4 = (undefined1 *)0x837165;
          FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 0x4c;
          iStack_3a0 = 0x837173;
          FUN_00412550();
          FUN_00449713();
          iStack_3a0 = unaff_EBP + 0x10;
          puStack_3a4 = (undefined1 *)0x837187;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0x4b;
          if (*(int *)(unaff_EBP + -0x118) != 0) {
            FUN_00434e38();
          }
          pcVar7 = (char *)(unaff_EBP + -0x1e4);
          *(undefined1 *)(unaff_EBP + -4) = 0x49;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            FUN_00878dfb();
            pcVar7 = extraout_ECX_12;
          }
          iStack_3a0 = 0;
          puStack_3a4 = (undefined1 *)0x0;
          iStack_3ac = unaff_EBP + 0x10;
          *(char ***)(unaff_EBP + 0xc) = &pcStack_3a8;
          ppcStack_3b0 = (char **)0x8371d0;
          pcStack_3a8 = pcVar7;
          FUN_00450368();
          iStack_3ac = 0x8371d5;
          iVar3 = FUN_007db791();
          *(undefined1 *)(unaff_EBP + -4) = 0x48;
          if (iVar3 == 6) {
            if (*(int *)(unaff_EBP + 0x10) != 0) {
              FUN_00434e38();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x46;
            FUN_004c26e1();
            *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_00837223:
            FUN_004027eb();
            goto switchD_00835ced_caseD_1e;
          }
          if (*(int *)(unaff_EBP + 0x10) != 0) {
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x46;
          FUN_004c26e1();
        }
        goto LAB_0083736e;
      }
      iStack_3a0 = 0;
      puStack_3a4 = (undefined1 *)0x0;
      *(char ***)(unaff_EBP + 0xc) = &pcStack_3a8;
      iStack_3ac = 0xffffffff;
      ppcStack_3b0 = (char **)s_Users_under_level_15_users_canno_0096c7b4;
      pcStack_3a8 = extraout_ECX_11;
      FUN_0045f0f3();
      goto LAB_0083725a;
    }
    iStack_3a0 = 0x83704e;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    iStack_3a0 = 0x83705a;
    FUN_00471102();
    iVar3 = *(int *)(unaff_EBP + -0x90);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    goto LAB_00837065;
  case 0x13:
    if ((*(int *)(*(int *)(unaff_EBP + -0x30) + 0x20) != 0) ||
       (iVar3 = FUN_00839aab(), pcVar7 = extraout_ECX_13, iVar3 != 0)) {
      *(char ***)(unaff_EBP + 0xc) = &pcStack_3a8;
      pcStack_3a8 = pcVar7;
      goto LAB_0083724a;
    }
    iStack_3a0 = 0x837279;
    FUN_004497f5();
    if (*(int *)(unaff_EBP + 8) != 0) {
      *(undefined4 *)(unaff_EBP + 0x10) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x4e;
      iStack_3a0 = 0x83729c;
      piVar8 = (int *)FUN_00679e4e();
      iVar3 = *piVar8;
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      if (iVar3 != 0) {
        FUN_00409205();
      }
      iStack_3a0 = unaff_EBP + -0x168;
      puStack_3a4 = (undefined1 *)0x8372c5;
      uVar4 = FUN_00550bc4();
      *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x50;
      iStack_3a0 = 0x8372df;
      FUN_00679d22();
      iStack_3a0 = unaff_EBP + 0x10;
      *(undefined1 *)(unaff_EBP + -4) = 0x51;
      puStack_3a4 = (undefined1 *)0x8372f4;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x50;
      if (*(int *)(unaff_EBP + -0x98) != 0) {
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      if (*(int *)(unaff_EBP + -0x168) != 0) {
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4e;
      FUN_00402fa6();
      iStack_3a0 = 0;
      puStack_3a4 = (undefined1 *)0x0;
      iStack_3ac = unaff_EBP + 0x10;
      *(char ***)(unaff_EBP + 0xc) = &pcStack_3a8;
      ppcStack_3b0 = (char **)0x837349;
      pcStack_3a8 = extraout_ECX_14;
      FUN_00450368();
      iStack_3ac = 0x83734e;
      iVar3 = FUN_007db791();
      if (iVar3 == 6) {
        puStack_3a4 = &stack0xfffffc64;
        *(undefined1 **)(unaff_EBP + 0xc) = &stack0xfffffc64;
        iStack_3a0 = 0x70e;
        pcStack_3a8 = (char *)0x83739c;
        FUN_00679e4e();
        iStack_3a0 = unaff_EBP + -0x1c4;
        *(undefined1 *)(unaff_EBP + -4) = 0x4e;
        puStack_3a4 = (undefined1 *)0x8373af;
        FUN_0040263d();
        puStack_3a4 = (undefined1 *)0x8373b6;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x53;
        iStack_3a0 = 0x8373c0;
        FUN_004343c5();
        *(undefined4 *)(unaff_EBP + -0x48) = 0;
        iStack_3a0 = 0x8373d0;
        FUN_004184ca();
        *(undefined1 *)(unaff_EBP + -4) = 0x55;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        FUN_00424aee();
        *(undefined1 *)(unaff_EBP + -4) = 0x56;
        FUN_00424aee();
        iStack_3a0 = unaff_EBP + -0x1a4;
        puStack_3a4 = (undefined1 *)(unaff_EBP + -0x1b4);
        *(undefined1 *)(unaff_EBP + -4) = 0x57;
        pcStack_3a8 = (char *)0x837428;
        iStack_3ac = FUN_00411641();
        *(char ***)(unaff_EBP + 0xc) = &pcStack_3a8;
        ppcStack_3b0 = (char **)0x837434;
        pcStack_3a8 = extraout_ECX_15;
        FUN_004033a1();
        iStack_3ac = unaff_EBP + -0x1d4;
        *(undefined1 *)(unaff_EBP + -4) = 0x57;
        ppcStack_3b0 = (char **)0x837444;
        FUN_00405a1d();
        ppcStack_3b0 = (char **)0x83744b;
        FUN_00402660();
        ppcStack_3b0 = (char **)0x837452;
        FUN_00404a02();
        *(undefined1 *)(unaff_EBP + -4) = 0x59;
        iStack_3a0 = 0x83745d;
        uVar4 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x120) = uVar4;
        FUN_0083f223();
        *(undefined1 *)(unaff_EBP + -4) = 0x5d;
        FUN_00404892();
        *(undefined1 *)(unaff_EBP + -4) = 0x5c;
        FUN_00404892();
        *(undefined1 *)(unaff_EBP + -4) = 0x5b;
        FUN_00404892();
        FUN_0083d251();
        FUN_00839b04();
        FUN_00457d37();
        FUN_00434034();
        *(undefined1 *)(unaff_EBP + -4) = 0x4e;
        FUN_00402676();
        *(undefined1 *)(unaff_EBP + -4) = 0x4d;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_00837a73:
        FUN_00402630();
        goto switchD_00835ced_caseD_1e;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      if (*(int *)(unaff_EBP + 0x10) != 0) {
        FUN_00434e38();
      }
    }
LAB_0083736e:
    FUN_004027eb();
    goto LAB_00837373;
  case 0x14:
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + 0x10) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00696b58();
    }
    uVar6 = -(uint)(iVar3 != 0) & iVar3 + 8U;
    *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar6 != 0) & uVar6 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0083e175();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    iVar3 = FUN_004bc6a2();
    if (iVar3 == 1) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      iStack_3a0 = 0x8367c3;
      FUN_00697168();
      *(undefined1 **)(unaff_EBP + 0x10) = &stack0xfffffc68;
      iStack_3a0 = 0x8367d4;
      FUN_00414f8b();
      FUN_00459cb5();
      *(undefined1 **)(unaff_EBP + 0x10) = &stack0xfffffc68;
      iStack_3a0 = 0x8367ed;
      FUN_00414f8b();
      FUN_00459cb5();
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      if (*(int *)(unaff_EBP + 8) != 0) {
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0083e192();
      goto switchD_00835ced_caseD_1e;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0083e192();
    goto LAB_00837373;
  case 0x15:
    iStack_3a0 = 0x837aa1;
    iVar3 = FUN_00835ab5();
    if (iVar3 != 0) goto switchD_00835ced_caseD_1e;
    goto switchD_00835ced_caseD_1b;
  case 0x16:
    iVar3 = FUN_0083d8a8();
    if (iVar3 != 0) {
      iStack_3a0 = 0x837501;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x5e;
      iStack_3a0 = 0x83750d;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      break;
    }
    iStack_3a0 = 0x837529;
    FUN_0048b97b();
    iStack_3a0 = 0x837530;
    FUN_004497f5();
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    cVar2 = FUN_00411581();
    if (cVar2 == '\0') {
      FUN_00455c59();
      *(undefined1 *)(unaff_EBP + -4) = 0x60;
      FUN_00649618();
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      FUN_0045e14e();
      FUN_00740cce();
      iVar3 = FUN_00839b2b();
      if (-1 < iVar3) {
        FUN_00740cce();
        iVar3 = FUN_00839b2b();
        if (iVar3 < 9) {
          *(undefined4 *)(unaff_EBP + 0x10) = 0;
          *(undefined4 *)(unaff_EBP + -0x30) = 0;
          iVar3 = FUN_00402605();
          *(int *)(unaff_EBP + 0xc) = iVar3;
          *(undefined1 *)(unaff_EBP + -4) = 0x61;
          if (iVar3 != 0) {
            FUN_00839c83();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x5f;
          iStack_3a0 = 0x8375d5;
          FUN_0083da96();
          *(undefined1 *)(unaff_EBP + -4) = 0x62;
          iStack_3a0 = 0x8375e3;
          FUN_0083dac8();
          iStack_3a0 = 0x8375ea;
          FUN_00839cde();
          FUN_0083dac8();
          FUN_00839cf5();
          FUN_0083dac8();
          iVar3 = FUN_004bc6a2();
          if (iVar3 == 1) {
            iStack_3a0 = 0x83762d;
            FUN_0083dac8();
            iStack_3a0 = 0x837634;
            FUN_00839d95();
            iVar3 = FUN_00402605();
            *(int *)(unaff_EBP + 0xc) = iVar3;
            *(undefined1 *)(unaff_EBP + -4) = 99;
            if (iVar3 != 0) {
              FUN_00839c83();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x62;
            iStack_3a0 = 0x83765f;
            FUN_0083da96();
            *(undefined1 *)(unaff_EBP + -4) = 100;
            iStack_3a0 = 0x83766f;
            FUN_0083dac8();
            iStack_3a0 = 0x837676;
            FUN_00839cde();
            FUN_0083dac8();
            FUN_00839cf5();
            FUN_0083dac8();
            iVar3 = FUN_004bc6a2();
            if (iVar3 == 1) {
              iStack_3a0 = 0x8376ac;
              FUN_0083dac8();
              iStack_3a0 = 0x8376b3;
              FUN_00839d95();
              iVar3 = FUN_00402605();
              *(int *)(unaff_EBP + 0xc) = iVar3;
              *(undefined1 *)(unaff_EBP + -4) = 0x65;
              if (iVar3 != 0) {
                FUN_00839e72();
              }
              *(undefined1 *)(unaff_EBP + -4) = 100;
              iStack_3a0 = 0x8376e2;
              FUN_0083dad1();
              *(undefined1 *)(unaff_EBP + -4) = 0x66;
              iStack_3a0 = 0x8376f4;
              FUN_0083db03();
              iStack_3a0 = 0x8376fb;
              FUN_00839ea3();
              FUN_0083db03();
              FUN_00839eba();
              FUN_0083db03();
              iVar3 = FUN_004bc6a2();
              if (iVar3 == 1) {
                iStack_3a0 = 0x83774a;
                FUN_0083db03();
                iStack_3a0 = 0x837751;
                FUN_00839f06();
                FUN_00457d37();
                FUN_00457d37();
                *(undefined1 *)(unaff_EBP + -4) = 100;
                thunk_FUN_0083e22b();
                *(undefined1 *)(unaff_EBP + -4) = 0x62;
                thunk_FUN_0083e1f8();
                *(undefined1 *)(unaff_EBP + -4) = 0x5f;
                thunk_FUN_0083e1f8();
                *(undefined1 *)(unaff_EBP + -4) = 0;
                goto LAB_00837a73;
              }
              *(undefined1 *)(unaff_EBP + -4) = 100;
              thunk_FUN_0083e22b();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x62;
            thunk_FUN_0083e1f8();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x5f;
          thunk_FUN_0083e1f8();
        }
      }
    }
LAB_008378f9:
    FUN_00402630();
    goto switchD_00835ced_caseD_1b;
  case 0x17:
    iVar3 = FUN_0083d8a8();
    if (iVar3 == 0) {
      iStack_3a0 = 0x8377dd;
      FUN_0048b97b();
      iStack_3a0 = 0x8377e4;
      FUN_004497f5();
      *(undefined1 *)(unaff_EBP + -4) = 0x68;
      cVar2 = FUN_00411581();
      if (cVar2 == '\0') {
        FUN_00455c59();
        *(undefined1 *)(unaff_EBP + -4) = 0x69;
        uVar4 = FUN_00649618();
        *(undefined4 *)(unaff_EBP + -0x48) = uVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x68;
        FUN_0045e14e();
        FUN_00740cce();
        iVar3 = FUN_00839b2b();
        if (0 < iVar3) {
          FUN_00740cce();
          iVar3 = FUN_00839b2b();
          if (iVar3 < 9) {
            iVar3 = *(int *)(unaff_EBP + 0xc);
            *(undefined4 *)(unaff_EBP + -0x40) = 0;
            *(undefined4 *)(unaff_EBP + 0x10) = 0;
            FUN_00740cce();
            iVar9 = FUN_00483340();
            if (iVar3 % 10 <= iVar9) {
              iVar3 = FUN_00402605();
              *(int *)(unaff_EBP + 0xc) = iVar3;
              *(undefined1 *)(unaff_EBP + -4) = 0x6a;
              if (iVar3 != 0) {
                FUN_00839fc7();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x68;
              iStack_3a0 = 0x8378b4;
              FUN_0083db0c();
              *(undefined1 *)(unaff_EBP + -4) = 0x6b;
              FUN_0083db3e();
              FUN_0083a0bb();
              FUN_0083db3e();
              FUN_0083a049();
              FUN_0083db3e();
              iVar3 = FUN_004bc6a2();
              if (iVar3 == 1) {
                FUN_0083db3e();
                FUN_0083a0ac();
                iVar3 = FUN_00402605();
                *(int *)(unaff_EBP + 0xc) = iVar3;
                *(undefined1 *)(unaff_EBP + -4) = 0x6c;
                if (iVar3 != 0) {
                  FUN_0083a187();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x6b;
                iStack_3a0 = 0x837945;
                FUN_0083db47();
                *(undefined1 *)(unaff_EBP + -4) = 0x6d;
                iStack_3a0 = 0x837955;
                FUN_0083db79();
                iStack_3a0 = 0x83795c;
                FUN_0083a27a();
                FUN_0083db79();
                FUN_0083a203();
                FUN_0083db79();
                iVar3 = FUN_004bc6a2();
                if (iVar3 == 1) {
                  FUN_0083db79();
                  FUN_0083a26b();
                  iVar3 = FUN_00402605();
                  *(int *)(unaff_EBP + 0xc) = iVar3;
                  *(undefined1 *)(unaff_EBP + -4) = 0x6e;
                  if (iVar3 != 0) {
                    FUN_0083a341();
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0x6d;
                  iStack_3a0 = 0x8379c4;
                  FUN_0083db82();
                  *(undefined1 *)(unaff_EBP + -4) = 0x6f;
                  iStack_3a0 = 0x8379d6;
                  FUN_0083dbb4();
                  iStack_3a0 = 0x8379dd;
                  FUN_0083a3b3();
                  FUN_0083dbb4();
                  FUN_0083a3ca();
                  FUN_0083dbb4();
                  iVar3 = FUN_004bc6a2();
                  if (iVar3 == 1) {
                    iStack_3a0 = 0x837a2c;
                    FUN_0083dbb4();
                    iStack_3a0 = 0x837a33;
                    FUN_0083a398();
                    FUN_00457d37();
                    FUN_00457d37();
                    *(undefined1 *)(unaff_EBP + -4) = 0x6d;
                    thunk_FUN_0083e2c4();
                    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
                    thunk_FUN_0083e291();
                    *(undefined1 *)(unaff_EBP + -4) = 0x68;
                    thunk_FUN_0083e25e();
                    *(undefined1 *)(unaff_EBP + -4) = 0;
                    goto LAB_00837a73;
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0x6d;
                  thunk_FUN_0083e2c4();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x6b;
                thunk_FUN_0083e291();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x68;
              thunk_FUN_0083e25e();
            }
          }
        }
      }
      goto LAB_008378f9;
    }
    iStack_3a0 = 0x8377b5;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x67;
    iStack_3a0 = 0x8377c1;
    FUN_00471102();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x18:
    FUN_0045d247();
  case 0x1e:
  case 0x20:
switchD_00835ced_caseD_1e:
    iStack_3a0 = 0x836713;
    iVar3 = FUN_004becbc();
    if (iVar3 == 0) {
      *(char ***)(unaff_EBP + 0xc) = &pcStack_3a8;
      iStack_3ac = 0x137;
      pcStack_3a8 = extraout_ECX_04;
LAB_0083672a:
      iStack_3a0 = 0;
      puStack_3a4 = (undefined1 *)0x0;
      ppcStack_3b0 = &pcStack_3a8;
      FUN_00679d22();
      iStack_3ac = 0x83673a;
      FUN_007db3ad();
    }
    else {
      FUN_007d1e08();
      FUN_00457d37();
      FUN_00839a29();
      FUN_00839a39();
      iStack_3a0 = 0x839945;
      FUN_00679d86();
      *(undefined4 *)(unaff_EBP + -4) = 0x10b;
      FUN_00411641();
      iStack_3a0 = 0x83995b;
      FUN_007d4073();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
    }
    goto switchD_00835ced_caseD_1b;
  case 0x19:
    iVar3 = FUN_0083d8a8();
    if (iVar3 != 0) {
      iStack_3a0 = 0x837b27;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x70;
      iStack_3a0 = 0x837b33;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      break;
    }
    FUN_0083d931();
    iStack_3a0 = 0x837b53;
    FUN_0083d4cf();
    *(undefined1 *)(unaff_EBP + -4) = 0x71;
    iVar3 = FUN_0083d501();
    if (iVar3 != 0) {
      iVar3 = FUN_00402605();
      *(int *)(unaff_EBP + 0xc) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0x72;
      if (iVar3 != 0) {
        pcStack_3a8 = (char *)(unaff_EBP + -0x2c);
        *(undefined1 ***)(unaff_EBP + 8) = &puStack_3a4;
        iStack_3ac = 0x837b8a;
        FUN_004bee08();
        pcStack_3a8 = (char *)0x837b92;
        FUN_006c4232();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_00837c30:
    thunk_FUN_004c26ae();
    goto switchD_00835ced_caseD_1b;
  case 0x1a:
    iVar3 = FUN_0083d8a8();
    if (iVar3 == 0) {
      FUN_0083d931();
      iStack_3a0 = 0x837be8;
      FUN_0083d4cf();
      *(undefined1 *)(unaff_EBP + -4) = 0x74;
      iVar3 = FUN_0083d501();
      if (iVar3 != 0) {
        iVar3 = FUN_00402605();
        *(int *)(unaff_EBP + 0xc) = iVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        if (iVar3 != 0) {
          iStack_3a0 = 0;
          *(char ****)(unaff_EBP + 8) = &ppcStack_3b0;
          FUN_004bee08(unaff_EBP + -0x2c);
          FUN_006bef4f();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_00837c30;
    }
    iStack_3a0 = 0x837bbc;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x73;
    iStack_3a0 = 0x837bc8;
    FUN_00471102();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  default:
    goto switchD_00835ced_caseD_1b;
  case 0x1c:
    FUN_008358eb();
    goto switchD_00835ced_caseD_1b;
  case 0x1d:
    FUN_005a9f5e();
    iVar3 = FUN_00839a55();
    if (iVar3 == 0) {
      iStack_3a0 = 0x837c75;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x76;
      iStack_3a0 = 0x837c81;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      break;
    }
    goto switchD_00835ced_caseD_1e;
  case 0x1f:
    iVar3 = FUN_0083d8a8();
    if (iVar3 != 0) {
      iStack_3a0 = 0x837d31;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x79;
      iStack_3a0 = 0x837d3d;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      break;
    }
    FUN_00429303();
    iVar3 = FUN_00839adb();
    if (iVar3 != 0) {
      iStack_3a0 = 0;
      puStack_3a4 = (undefined1 *)0x0;
      ppcStack_3b0 = &pcStack_3a8;
      *(char ***)(unaff_EBP + 0x10) = &pcStack_3a8;
      iStack_3ac = 0x121;
      pcStack_3a8 = extraout_ECX_16;
      FUN_00679d22();
      iStack_3ac = 0x837d79;
      iVar3 = FUN_007db3ad();
      if (iVar3 != 0) goto switchD_00835ced_caseD_1b;
    }
    iVar3 = FUN_00402605();
    *(int *)(unaff_EBP + 0x10) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x7a;
    if (iVar3 != 0) {
      FUN_007e62e9();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_3a0 = 0x837db2;
    FUN_0083d8ff();
    pcStack_3a8 = (char *)&iStack_3a0;
    *(int **)(unaff_EBP + 0x10) = &iStack_3a0;
    puStack_3a4 = (undefined1 *)0x571;
    *(undefined1 *)(unaff_EBP + -4) = 0x7b;
    iStack_3ac = 0x837dcb;
    FUN_00679d22();
    puStack_3a4 = (undefined1 *)0x0;
    pcStack_3a8 = (char *)0x3;
    *(undefined1 *)(unaff_EBP + -4) = 0x7b;
    iStack_3ac = 0x837dda;
    FUN_004c2677();
    iStack_3ac = 0x837de1;
    FUN_007eddac();
    iStack_3a0 = 0x28;
    puStack_3a4 = (undefined1 *)0x0;
    pcStack_3a8 = (char *)0x0;
    iStack_3ac = 0x837def;
    FUN_004c2677();
    iStack_3ac = 0x837df6;
    FUN_007edfe1();
    FUN_004c2677();
    FUN_007e6e3c();
    FUN_004c2677();
    iVar3 = FUN_004bc6a2();
    if (iVar3 == 1) {
      FUN_004c2677();
      FUN_00641b6c();
      *(undefined1 *)(unaff_EBP + -4) = 0x7d;
      FUN_004f136e();
      iVar3 = FUN_0083d267();
      if (iVar3 == 0) {
        FUN_00450368();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        *(undefined1 *)(unaff_EBP + -4) = 0x7e;
        pcStack_3a8 = (char *)0x837e67;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x837e6d;
        uVar4 = FUN_00471777();
        *(undefined4 *)(unaff_EBP + 0x10) = uVar4;
        FUN_004150c0();
        if (*(int *)(unaff_EBP + 0x10) != 0) {
          *(undefined1 **)(unaff_EBP + 0x10) = &stack0xfffffc68;
          iStack_3a0 = 0x837ed8;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 *)(unaff_EBP + -4) = 0x7d;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x7b;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          thunk_FUN_004c26e1();
          goto switchD_00835ced_caseD_1e;
        }
        iStack_3a0 = 0;
        puStack_3a4 = (undefined1 *)0x0;
        ppcStack_3b0 = &pcStack_3a8;
        *(char ***)(unaff_EBP + 0x10) = &pcStack_3a8;
        iStack_3ac = 0x11d;
        pcStack_3a8 = extraout_ECX_17;
        FUN_00679d22();
        iStack_3ac = 0x837e9e;
        FUN_007db3ad();
        *(undefined1 *)(unaff_EBP + -4) = 0x7d;
        FUN_00414ebb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x7b;
      FUN_00414ebb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    thunk_FUN_004c26e1();
    goto switchD_00835ced_caseD_1b;
  case 0x21:
    FUN_0048b97b();
    iVar3 = FUN_004260d0();
    if (iVar3 == 0) goto switchD_00835ced_caseD_1b;
    iVar3 = FUN_005a9f5e();
    (**(code **)(*(int *)(iVar3 + 4) + 0x10))();
    iStack_3a0 = *(int *)(unaff_EBP + 0xc);
    puStack_3a4 = (undefined1 *)0x8398e1;
    FUN_005a9f5e();
    puStack_3a4 = (undefined1 *)0x8398e8;
    puStack_3a4 = (undefined1 *)FUN_0067e5d1();
    pcStack_3a8 = (char *)0x8398ee;
    FUN_0083d8f9();
    pcStack_3a8 = (char *)0x8398f5;
    iVar3 = FUN_00423cf4();
    if (iVar3 != 0) goto switchD_00835ced_caseD_1e;
    *(char ***)(unaff_EBP + 0xc) = &pcStack_3a8;
    iStack_3ac = 0x11dd;
    pcStack_3a8 = extraout_ECX_26;
    goto LAB_0083672a;
  case 0x24:
    FUN_00429303();
    iVar3 = FUN_00839ae2();
    if (iVar3 == 0) {
      iVar3 = FUN_0083d8a8();
      if (iVar3 == 0) goto switchD_00835ced_caseD_1e;
      iStack_3a0 = 0x837cf6;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x78;
      iStack_3a0 = 0x837d02;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else {
      iStack_3a0 = 0x837cb7;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x77;
      iStack_3a0 = 0x837cc3;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    break;
  case 0x27:
    iVar3 = FUN_00839c6c();
    if (iVar3 != 0) {
      FUN_005a9f5e();
      iVar3 = FUN_00839aef();
      if (iVar3 == 0) {
        FUN_005a9f5e();
        iVar3 = FUN_00839a9f();
        if (iVar3 == 0) {
          iStack_3a0 = 0x837b01;
          FUN_007d3d3e();
          goto switchD_00835ced_caseD_1e;
        }
      }
    }
    goto switchD_00835ced_caseD_1b;
  case 0x29:
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x38) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iStack_3a0 = 0x836095;
      iVar3 = FUN_006a7634();
    }
    uVar6 = -(uint)(iVar3 != 0) & iVar3 + 8U;
    *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar6 != 0) & uVar6 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_0083e10f();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iVar3 = FUN_004bc6a2();
    if (iVar3 == 1) {
      iStack_3a0 = unaff_EBP + 0x10;
      puStack_3a4 = (undefined1 *)(unaff_EBP + -0x14);
      pcStack_3a8 = (char *)0x83614f;
      FUN_006a7ae0();
      iStack_3ac = unaff_EBP + -0x30;
      iStack_3a0 = *(int *)(unaff_EBP + 0x10);
      puStack_3a4 = *(undefined1 **)(unaff_EBP + -0x14);
      pcStack_3a8 = s__s_s_s_s_0096c7ec;
      ppcStack_3b0 = (char **)0x836169;
      FUN_00434e21();
      iStack_3a0 = 0x836176;
      FUN_0045ed72();
      puVar5 = (undefined4 *)FUN_0045ee27();
      if (((char *)*puVar5 != (char *)0x0) && (*(char *)*puVar5 != '\0')) {
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          *(undefined4 *)(unaff_EBP + -0x40) = 0;
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + -4);
        }
        if (*(int *)(unaff_EBP + 0x10) == 0) {
          *(undefined4 *)(unaff_EBP + -0x50) = 0;
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(*(int *)(unaff_EBP + 0x10) + -4);
        }
        if (*(int *)(unaff_EBP + 8) == 0) {
          *(undefined4 *)(unaff_EBP + -0x48) = 0;
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + -4);
        }
        iStack_3a0 = 0x8361f7;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        iStack_3a0 = 0x83620d;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_3a0 = 0x836220;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        if (*(int *)(unaff_EBP + -0x13c) != 0) {
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (*(int *)(unaff_EBP + -0x144) != 0) {
          FUN_00434e38();
        }
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x836260;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x836266;
        iVar3 = FUN_00471777();
        FUN_004150c0();
        if ((*(int *)(unaff_EBP + 0xc) != 0) && (iVar3 == 0)) {
          iStack_3a0 = 0;
          puStack_3a4 = (undefined1 *)0x0;
          ppcStack_3b0 = &pcStack_3a8;
          *(char ***)(unaff_EBP + -0x38) = &pcStack_3a8;
          iStack_3ac = 0x11d;
          pcStack_3a8 = extraout_ECX_03;
          FUN_00679d22();
          iStack_3ac = 0x83629d;
          FUN_007db3ad();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          if (*(int *)(unaff_EBP + 0xc) != 0) {
            FUN_00434e38();
          }
          goto LAB_008360cc;
        }
        iStack_3a0 = 0x8362d0;
        FUN_0045e070();
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (*(int *)(unaff_EBP + -0x150) != 0) {
          FUN_00434e38();
        }
        iStack_3a0 = unaff_EBP + -0x100;
        puStack_3a4 = (undefined1 *)0x836309;
        FUN_0045e053();
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (*(int *)(unaff_EBP + -0x100) != 0) {
          FUN_00434e38();
        }
        iStack_3a0 = 0x83633d;
        FUN_0045e070();
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (*(int *)(unaff_EBP + -0x68) != 0) {
          FUN_00434e38();
        }
        iStack_3a0 = unaff_EBP + -0x174;
        puStack_3a4 = (undefined1 *)0x836373;
        FUN_0045e053();
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (*(int *)(unaff_EBP + -0x174) != 0) {
          FUN_00434e38();
        }
        iStack_3a0 = 0x8363a7;
        FUN_0045e070();
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (*(int *)(unaff_EBP + -0x70) != 0) {
          FUN_00434e38();
        }
        iStack_3a0 = unaff_EBP + -0x108;
        puStack_3a4 = (undefined1 *)0x8363dd;
        FUN_0045e053();
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (*(int *)(unaff_EBP + -0x108) != 0) {
          FUN_00434e38();
        }
        FUN_00414f8b();
        *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
        iStack_3a0 = 0x83641f;
        FUN_00414f8b();
        FUN_00459cb5();
        *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
        iStack_3a0 = 0x836438;
        FUN_00414f8b();
        FUN_00459cb5();
        *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
        iStack_3a0 = 0x836451;
        FUN_00414f8b();
        FUN_00459cb5();
        *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
        iStack_3a0 = 0x83646a;
        FUN_00414f8b();
        FUN_00459cb5();
        FUN_006a7cb3();
        FUN_00457cda();
        FUN_00448190();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_004b8684();
        FUN_0083e12c();
        *(undefined ***)(unaff_EBP + -0x394) = &PTR_LAB_008e84a0;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        if (*(int *)(unaff_EBP + 0xc) != 0) {
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        FUN_0083e12c();
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        if (*(int *)(unaff_EBP + -0x30) != 0) {
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if (*(int *)(unaff_EBP + 8) != 0) {
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (*(int *)(unaff_EBP + 0x10) != 0) {
          FUN_00434e38();
        }
        iVar3 = *(int *)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_0083600d:
        if (iVar3 != 0) {
          FUN_00434e38();
        }
        goto switchD_00835ced_caseD_1e;
      }
      iStack_3a0 = 0;
      puStack_3a4 = (undefined1 *)0x0;
      ppcStack_3b0 = &pcStack_3a8;
      *(char ***)(unaff_EBP + -0x38) = &pcStack_3a8;
      iStack_3ac = 0xe40;
      pcStack_3a8 = extraout_ECX_02;
      FUN_00679d22();
      iStack_3ac = 0x8361a6;
      FUN_007db3ad();
    }
LAB_008360cc:
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_0083e12c();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      FUN_00434e38();
    }
    iVar3 = *(int *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_00837065:
    if (iVar3 != 0) {
      FUN_00434e38();
    }
    goto LAB_00837373;
  case 0x2d:
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0x7f;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0x80;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0x81;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0x82;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0x83;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0x84;
    iVar3 = FUN_00402605();
    *(int *)(unaff_EBP + -0x38) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x85;
    if (iVar3 != 0) {
      iStack_3a0 = 0;
      puStack_3a4 = (undefined1 *)0x837f70;
      FUN_006a6708();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x84;
    iStack_3a0 = 0x837f82;
    FUN_0083dbbd();
    *(undefined1 *)(unaff_EBP + -4) = 0x86;
    FUN_0083dbef();
    iVar3 = FUN_004bc6a2();
    if (iVar3 == 1) {
      FUN_0083da59();
      iVar3 = FUN_0059d237();
      if (iVar3 != 0) {
        iStack_3a0 = unaff_EBP + 8;
        puStack_3a4 = (undefined1 *)(unaff_EBP + 0x10);
        pcStack_3a8 = (char *)(unaff_EBP + -0x10);
        iStack_3ac = unaff_EBP + -0x14;
        ppcStack_3b0 = (char **)0x83801c;
        FUN_0083dbef();
        ppcStack_3b0 = (char **)0x838023;
        FUN_006a73a3();
        FUN_0083dbf3();
        iStack_3a0 = 0x83803f;
        FUN_0083d279();
        *(undefined1 *)(unaff_EBP + -4) = 0x87;
        iStack_3a0 = 0x838055;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0x88;
        iStack_3a0 = 0x838068;
        FUN_0083d279();
        *(undefined1 *)(unaff_EBP + -4) = 0x89;
        iStack_3a0 = 0x83807e;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0x8a;
        iStack_3a0 = 0x838091;
        FUN_0083d279();
        *(undefined1 *)(unaff_EBP + -4) = 0x8b;
        iStack_3a0 = 0x8380a7;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0x8c;
        iStack_3a0 = 0x8380ba;
        FUN_0083d279();
        *(undefined1 *)(unaff_EBP + -4) = 0x8d;
        iStack_3a0 = 0x8380cd;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0x95;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x94;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x93;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x92;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x91;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x90;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x8f;
        FUN_00414ebb();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x838147;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x83814d;
        uVar4 = FUN_00471777();
        *(undefined4 *)(unaff_EBP + -0x50) = uVar4;
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x838169;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x83816f;
        iVar3 = FUN_00471777();
        if (iVar3 == 0) {
          *(undefined4 *)(unaff_EBP + -0x50) = 0;
        }
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x83818f;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x838195;
        iVar3 = FUN_00471777();
        if (iVar3 == 0) {
          *(undefined4 *)(unaff_EBP + -0x50) = 0;
        }
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x8381b5;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x8381bb;
        iVar3 = FUN_00471777();
        if (iVar3 == 0) {
          *(undefined4 *)(unaff_EBP + -0x50) = 0;
        }
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x8381db;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x8381e1;
        iVar3 = FUN_00471777();
        if (iVar3 == 0) {
          *(undefined4 *)(unaff_EBP + -0x50) = 0;
        }
        FUN_004150c0();
        iVar3 = FUN_00449713();
        if ((iVar3 == 0) || (*(int *)(unaff_EBP + -0x50) != 0)) {
          FUN_004e21db();
          iVar3 = FUN_0083d267();
          *(byte *)(unaff_EBP + -0x48) = (-(iVar3 != 0) & 0xfeU) + 3;
          FUN_00457cda();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x83826b;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x838282;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x838299;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x8382b0;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x8382c7;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x8382de;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 *)(unaff_EBP + -4) = 0x86;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x84;
          thunk_FUN_0083e2f7();
          *(undefined1 *)(unaff_EBP + -4) = 0x83;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x82;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x81;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x80;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x7f;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_008398a6:
          FUN_00414ebb();
          goto switchD_00835ced_caseD_1e;
        }
        iStack_3a0 = 0;
        puStack_3a4 = (undefined1 *)0x0;
        ppcStack_3b0 = &pcStack_3a8;
        *(char ***)(unaff_EBP + -0x48) = &pcStack_3a8;
        iStack_3ac = 0x11d;
        pcStack_3a8 = extraout_ECX_18;
        FUN_00679d22();
        iStack_3ac = 0x838225;
        FUN_007db3ad();
        *(undefined1 *)(unaff_EBP + -4) = 0x86;
        FUN_00414ebb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x84;
    thunk_FUN_0083e2f7();
    *(undefined1 *)(unaff_EBP + -4) = 0x83;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x82;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x81;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x80;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x7f;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x2e:
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0x96;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0x97;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0x98;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0x99;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0x9a;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0x9b;
    iVar3 = FUN_00402605();
    *(int *)(unaff_EBP + -0x38) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x9c;
    if (iVar3 != 0) {
      iStack_3a0 = 0;
      puStack_3a4 = (undefined1 *)0x8383ad;
      FUN_006a6708();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x9b;
    iStack_3a0 = 0x8383bf;
    FUN_0083dbbd();
    *(undefined1 *)(unaff_EBP + -4) = 0x9d;
    FUN_0083dbef();
    iVar3 = FUN_004bc6a2();
    if (iVar3 == 1) {
      FUN_0083da59();
      iVar3 = FUN_0059d237();
      if (iVar3 != 0) {
        iStack_3a0 = unaff_EBP + 8;
        puStack_3a4 = (undefined1 *)(unaff_EBP + 0x10);
        pcStack_3a8 = (char *)(unaff_EBP + -0x10);
        iStack_3ac = unaff_EBP + -0x14;
        ppcStack_3b0 = (char **)0x838459;
        FUN_0083dbef();
        ppcStack_3b0 = (char **)0x838460;
        FUN_006a73a3();
        FUN_0083dbf3();
        iStack_3a0 = 0x83847c;
        FUN_0083d279();
        *(undefined1 *)(unaff_EBP + -4) = 0x9e;
        iStack_3a0 = 0x838492;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0x9f;
        iStack_3a0 = 0x8384a5;
        FUN_0083d279();
        *(undefined1 *)(unaff_EBP + -4) = 0xa0;
        iStack_3a0 = 0x8384bb;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0xa1;
        iStack_3a0 = 0x8384cb;
        FUN_0083d279();
        *(undefined1 *)(unaff_EBP + -4) = 0xa2;
        iStack_3a0 = 0x8384e1;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0xa3;
        iStack_3a0 = 0x8384f4;
        FUN_0083d279();
        *(undefined1 *)(unaff_EBP + -4) = 0xa4;
        iStack_3a0 = 0x838507;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0xac;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xab;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xaa;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xa9;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xa8;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xa7;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xa6;
        FUN_00414ebb();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x83857e;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x838584;
        uVar4 = FUN_00471777();
        *(undefined4 *)(unaff_EBP + -0x40) = uVar4;
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x8385a0;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x8385a6;
        iVar3 = FUN_00471777();
        if (iVar3 == 0) {
          *(undefined4 *)(unaff_EBP + -0x40) = 0;
        }
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x8385c6;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x8385cc;
        iVar3 = FUN_00471777();
        if (iVar3 == 0) {
          *(undefined4 *)(unaff_EBP + -0x40) = 0;
        }
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x8385ec;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x8385f2;
        iVar3 = FUN_00471777();
        if (iVar3 == 0) {
          *(undefined4 *)(unaff_EBP + -0x40) = 0;
        }
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x838612;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x838618;
        iVar3 = FUN_00471777();
        if (iVar3 == 0) {
          *(undefined4 *)(unaff_EBP + -0x40) = 0;
        }
        FUN_004150c0();
        iVar3 = FUN_00449713();
        if ((iVar3 == 0) || (*(int *)(unaff_EBP + -0x40) != 0)) {
          FUN_004e21db();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x838684;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x83869b;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x8386b2;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x8386c9;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x8386e0;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 *)(unaff_EBP + -4) = 0x9d;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x9b;
          thunk_FUN_0083e2f7();
          *(undefined1 *)(unaff_EBP + -4) = 0x9a;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x99;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x98;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x97;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x96;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          goto LAB_008398a6;
        }
        iStack_3a0 = 0;
        puStack_3a4 = (undefined1 *)0x0;
        ppcStack_3b0 = &pcStack_3a8;
        *(char ***)(unaff_EBP + -0x48) = &pcStack_3a8;
        iStack_3ac = 0x11d;
        pcStack_3a8 = extraout_ECX_19;
        FUN_00679d22();
        iStack_3ac = 0x83865c;
        FUN_007db3ad();
        *(undefined1 *)(unaff_EBP + -4) = 0x9d;
        FUN_00414ebb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x9b;
    thunk_FUN_0083e2f7();
    *(undefined1 *)(unaff_EBP + -4) = 0x9a;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x99;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x98;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x97;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x96;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x2f:
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xad;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xae;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xaf;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xb0;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xb1;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xb2;
    iVar3 = FUN_00402605();
    *(int *)(unaff_EBP + -0x38) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xb3;
    if (iVar3 != 0) {
      iStack_3a0 = 0;
      puStack_3a4 = (undefined1 *)0x8387b0;
      FUN_006a6708();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb2;
    iStack_3a0 = 0x8387c2;
    FUN_0083dbbd();
    *(undefined1 *)(unaff_EBP + -4) = 0xb4;
    FUN_0083dbef();
    iVar3 = FUN_004bc6a2();
    if (iVar3 == 1) {
      FUN_0083da59();
      iVar3 = FUN_0059d237();
      if (iVar3 != 0) {
        iStack_3a0 = unaff_EBP + 8;
        puStack_3a4 = (undefined1 *)(unaff_EBP + 0x10);
        pcStack_3a8 = (char *)(unaff_EBP + -0x14);
        iStack_3ac = unaff_EBP + -0x30;
        ppcStack_3b0 = (char **)0x83885c;
        FUN_0083dbef();
        ppcStack_3b0 = (char **)0x838863;
        FUN_006a73a3();
        FUN_0083dbf3();
        iVar3 = FUN_0083d267();
        if (iVar3 == 0) {
          iStack_3a0 = 0x8388c9;
          FUN_0083d279();
          *(undefined1 *)(unaff_EBP + -4) = 0xb6;
          iStack_3a0 = 0x8388df;
          FUN_0045e02d();
          *(undefined1 *)(unaff_EBP + -4) = 0xb7;
          iStack_3a0 = 0x8388ef;
          FUN_0083d279();
          *(undefined1 *)(unaff_EBP + -4) = 0xb8;
          iStack_3a0 = 0x838902;
          FUN_0045e02d();
          *(undefined1 *)(unaff_EBP + -4) = 0xb9;
          iStack_3a0 = 0x838912;
          FUN_0083d279();
          *(undefined1 *)(unaff_EBP + -4) = 0xba;
          iStack_3a0 = 0x838925;
          FUN_0045e02d();
          *(undefined1 *)(unaff_EBP + -4) = 0xbb;
          iStack_3a0 = 0x838935;
          FUN_0083d279();
          *(undefined1 *)(unaff_EBP + -4) = 0xbc;
          iStack_3a0 = 0x838948;
          FUN_0045e02d();
          *(undefined1 *)(unaff_EBP + -4) = 0xc4;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0xc3;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0xc2;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0xc1;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0xc0;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0xbf;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0xbe;
          FUN_00414ebb();
          iStack_3a0 = 1;
          puStack_3a4 = (undefined1 *)0x400;
          pcStack_3a8 = (char *)0x8389b3;
          iStack_3a0 = FUN_00415015();
          puStack_3a4 = (undefined1 *)0x8389b9;
          uVar4 = FUN_00471777();
          *(undefined4 *)(unaff_EBP + -0x40) = uVar4;
          FUN_004150c0();
          iStack_3a0 = 1;
          puStack_3a4 = (undefined1 *)0x400;
          pcStack_3a8 = (char *)0x8389d5;
          iStack_3a0 = FUN_00415015();
          puStack_3a4 = (undefined1 *)0x8389db;
          iVar3 = FUN_00471777();
          if (iVar3 == 0) {
            *(undefined4 *)(unaff_EBP + -0x40) = 0;
          }
          FUN_004150c0();
          iStack_3a0 = 1;
          puStack_3a4 = (undefined1 *)0x400;
          pcStack_3a8 = (char *)0x8389fb;
          iStack_3a0 = FUN_00415015();
          puStack_3a4 = (undefined1 *)0x838a01;
          iVar3 = FUN_00471777();
          if (iVar3 == 0) {
            *(undefined4 *)(unaff_EBP + -0x40) = 0;
          }
          FUN_004150c0();
          iStack_3a0 = 1;
          puStack_3a4 = (undefined1 *)0x400;
          pcStack_3a8 = (char *)0x838a21;
          iStack_3a0 = FUN_00415015();
          puStack_3a4 = (undefined1 *)0x838a27;
          iVar3 = FUN_00471777();
          if (iVar3 == 0) {
            *(undefined4 *)(unaff_EBP + -0x40) = 0;
          }
          FUN_004150c0();
          iStack_3a0 = 1;
          puStack_3a4 = (undefined1 *)0x400;
          pcStack_3a8 = (char *)0x838a47;
          iStack_3a0 = FUN_00415015();
          puStack_3a4 = (undefined1 *)0x838a4d;
          iVar3 = FUN_00471777();
          if (iVar3 == 0) {
            *(undefined4 *)(unaff_EBP + -0x40) = 0;
          }
          FUN_004150c0();
          iVar3 = FUN_00449713();
          if ((iVar3 == 0) || (*(int *)(unaff_EBP + -0x40) != 0)) {
            FUN_004e21db();
            *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
            iStack_3a0 = 0x838ab9;
            FUN_00450368();
            FUN_00459cb5();
            *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
            iStack_3a0 = 0x838ad0;
            FUN_00450368();
            FUN_00459cb5();
            *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
            iStack_3a0 = 0x838ae7;
            FUN_00450368();
            FUN_00459cb5();
            *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
            iStack_3a0 = 0x838afe;
            FUN_00450368();
            FUN_00459cb5();
            *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
            iStack_3a0 = 0x838b15;
            FUN_00450368();
            FUN_00459cb5();
            *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
            iStack_3a0 = 0x838b2c;
            FUN_00450368();
            FUN_00459cb5();
            *(undefined1 *)(unaff_EBP + -4) = 0xb4;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0xb2;
            thunk_FUN_0083e2f7();
            *(undefined1 *)(unaff_EBP + -4) = 0xb1;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0xb0;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0xaf;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0xae;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0xad;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0;
            goto LAB_008398a6;
          }
          iStack_3a0 = 0;
          puStack_3a4 = (undefined1 *)0x0;
          ppcStack_3b0 = &pcStack_3a8;
          *(char ***)(unaff_EBP + -0x48) = &pcStack_3a8;
          iStack_3ac = 0x11d;
          pcStack_3a8 = extraout_ECX_21;
          FUN_00679d22();
          iStack_3ac = 0x838a91;
          FUN_007db3ad();
          *(undefined1 *)(unaff_EBP + -4) = 0xb4;
        }
        else {
          iStack_3a0 = 0x83888b;
          FUN_00679d22();
          iStack_3a0 = 0;
          puStack_3a4 = (undefined1 *)0x0;
          iStack_3ac = unaff_EBP + -0x48;
          *(char ***)(unaff_EBP + -0x40) = &pcStack_3a8;
          *(undefined1 *)(unaff_EBP + -4) = 0xb5;
          ppcStack_3b0 = (char **)0x8388a2;
          pcStack_3a8 = extraout_ECX_20;
          FUN_00450368();
          iStack_3ac = 0x8388a7;
          FUN_007db3ad();
          *(undefined1 *)(unaff_EBP + -4) = 0xb4;
        }
        FUN_00414ebb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb2;
    thunk_FUN_0083e2f7();
    *(undefined1 *)(unaff_EBP + -4) = 0xb1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xb0;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xaf;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xae;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xad;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x30:
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xc5;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xc6;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 199;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 200;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xc9;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xca;
    iVar3 = FUN_00402605();
    *(int *)(unaff_EBP + -0x38) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xcb;
    if (iVar3 != 0) {
      iStack_3a0 = 0;
      puStack_3a4 = (undefined1 *)0x838bfb;
      FUN_006a6708();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xca;
    iStack_3a0 = 0x838c0d;
    FUN_0083dbbd();
    *(undefined1 *)(unaff_EBP + -4) = 0xcc;
    FUN_0083dbef();
    iVar3 = FUN_004bc6a2();
    if (iVar3 == 1) {
      FUN_0083da59();
      iVar3 = FUN_0059d237();
      if (iVar3 != 0) {
        iStack_3a0 = unaff_EBP + 0x10;
        puStack_3a4 = (undefined1 *)(unaff_EBP + -0x10);
        pcStack_3a8 = (char *)(unaff_EBP + -0x14);
        iStack_3ac = unaff_EBP + -0x30;
        ppcStack_3b0 = (char **)0x838ca7;
        FUN_0083dbef();
        ppcStack_3b0 = (char **)0x838cae;
        FUN_006a73a3();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x838cbf;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x838cc5;
        FUN_00471777();
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x838cde;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x838ce4;
        FUN_00471777();
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x838cfd;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x838d03;
        FUN_00471777();
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x838d1c;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x838d22;
        FUN_00471777();
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x838d3b;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x838d41;
        FUN_00471777();
        FUN_004150c0();
        iStack_3a0 = 0x838d5f;
        FUN_0083d279();
        *(undefined1 *)(unaff_EBP + -4) = 0xcd;
        iStack_3a0 = 0x838d75;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0xce;
        iStack_3a0 = 0x838d89;
        FUN_0083d279();
        *(undefined1 *)(unaff_EBP + -4) = 0xcf;
        iStack_3a0 = 0x838d9f;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0xd0;
        iStack_3a0 = 0x838db3;
        FUN_0083d279();
        *(undefined1 *)(unaff_EBP + -4) = 0xd1;
        iStack_3a0 = 0x838dc9;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0xd2;
        iStack_3a0 = 0x838ddd;
        FUN_0083d279();
        *(undefined1 *)(unaff_EBP + -4) = 0xd3;
        iStack_3a0 = 0x838df0;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0xdb;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xda;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xd9;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xd8;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xd7;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xd6;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xd5;
        FUN_00414ebb();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x838e65;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x838e6b;
        iVar3 = FUN_00471777();
        FUN_004150c0();
        iVar9 = FUN_00449713();
        if ((iVar9 == 0) || (iVar3 != 0)) {
          FUN_004e21db();
          iVar3 = FUN_0083d267();
          *(byte *)(unaff_EBP + -0x48) = (-(iVar3 != 0) & 0xfeU) + 3;
          FUN_0083dbef();
          FUN_006a7623();
          FUN_00457cda();
          FUN_00457cda();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x838f09;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x838f20;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x838f37;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x838f4e;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x838f65;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x838f7c;
          FUN_00450368();
          FUN_00459cb5();
          FUN_0083dbf3();
          *(undefined1 *)(unaff_EBP + -4) = 0xcc;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0xca;
          thunk_FUN_0083e2f7();
          *(undefined1 *)(unaff_EBP + -4) = 0xc9;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 200;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 199;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0xc6;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0xc5;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          goto LAB_008398a6;
        }
        iStack_3a0 = 0;
        puStack_3a4 = (undefined1 *)0x0;
        ppcStack_3b0 = &pcStack_3a8;
        *(char ***)(unaff_EBP + -0x48) = &pcStack_3a8;
        iStack_3ac = 0x11d;
        pcStack_3a8 = extraout_ECX_22;
        FUN_00679d22();
        iStack_3ac = 0x838ea9;
        FUN_007db3ad();
        *(undefined1 *)(unaff_EBP + -4) = 0xcc;
        FUN_00414ebb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xca;
    thunk_FUN_0083e2f7();
    *(undefined1 *)(unaff_EBP + -4) = 0xc9;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 200;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 199;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xc6;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xc5;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x31:
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xdc;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xdd;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xde;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xdf;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xe0;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xe1;
    iVar3 = FUN_00402605();
    *(int *)(unaff_EBP + -0x38) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xe2;
    if (iVar3 != 0) {
      iStack_3a0 = 0;
      puStack_3a4 = (undefined1 *)0x839054;
      FUN_006a6708();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe1;
    iStack_3a0 = 0x839066;
    FUN_0083dbbd();
    *(undefined1 *)(unaff_EBP + -4) = 0xe3;
    FUN_0083dbef();
    iVar3 = FUN_004bc6a2();
    if (iVar3 == 1) {
      FUN_0083da59();
      iVar3 = FUN_0059d237();
      if (iVar3 != 0) {
        iStack_3a0 = unaff_EBP + 0x10;
        puStack_3a4 = (undefined1 *)(unaff_EBP + -0x10);
        pcStack_3a8 = (char *)(unaff_EBP + -0x14);
        iStack_3ac = unaff_EBP + -0x50;
        ppcStack_3b0 = (char **)0x839100;
        FUN_0083dbef();
        ppcStack_3b0 = (char **)0x839107;
        FUN_006a73a3();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x839118;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x83911e;
        FUN_00471777();
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x839137;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x83913d;
        FUN_00471777();
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x839156;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x83915c;
        FUN_00471777();
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x839175;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x83917b;
        FUN_00471777();
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x839194;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x83919a;
        FUN_00471777();
        FUN_004150c0();
        iStack_3a0 = 0x8391b8;
        FUN_0083d279();
        *(undefined1 *)(unaff_EBP + -4) = 0xe4;
        iStack_3a0 = 0x8391ce;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0xe5;
        iStack_3a0 = 0x8391e2;
        FUN_0083d279();
        *(undefined1 *)(unaff_EBP + -4) = 0xe6;
        iStack_3a0 = 0x8391f8;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0xe7;
        iStack_3a0 = 0x83920c;
        FUN_0083d279();
        *(undefined1 *)(unaff_EBP + -4) = 0xe8;
        iStack_3a0 = 0x839222;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0xe9;
        iStack_3a0 = 0x839236;
        FUN_0083d279();
        *(undefined1 *)(unaff_EBP + -4) = 0xea;
        iStack_3a0 = 0x839249;
        FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 0xf2;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xf1;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xf0;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xef;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xee;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xed;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xec;
        FUN_00414ebb();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x8392be;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x8392c4;
        iVar3 = FUN_00471777();
        FUN_004150c0();
        iVar9 = FUN_00449713();
        if ((iVar9 == 0) || (iVar3 != 0)) {
          FUN_004e21db();
          FUN_0083dbef();
          FUN_006a7623();
          FUN_00457cda();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x839342;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x839359;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x839370;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x839387;
          FUN_00450368();
          FUN_00459cb5();
          *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
          iStack_3a0 = 0x83939e;
          FUN_00450368();
          FUN_00459cb5();
          FUN_0083dbf3();
          *(undefined1 *)(unaff_EBP + -4) = 0xe3;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0xe1;
          thunk_FUN_0083e2f7();
          *(undefined1 *)(unaff_EBP + -4) = 0xe0;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0xdf;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0xde;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0xdd;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0xdc;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          goto LAB_008398a6;
        }
        iStack_3a0 = 0;
        puStack_3a4 = (undefined1 *)0x0;
        ppcStack_3b0 = &pcStack_3a8;
        *(char ***)(unaff_EBP + -0x48) = &pcStack_3a8;
        iStack_3ac = 0x11d;
        pcStack_3a8 = extraout_ECX_23;
        FUN_00679d22();
        iStack_3ac = 0x839302;
        FUN_007db3ad();
        *(undefined1 *)(unaff_EBP + -4) = 0xe3;
        FUN_00414ebb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe1;
    thunk_FUN_0083e2f7();
    *(undefined1 *)(unaff_EBP + -4) = 0xe0;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xdf;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xde;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xdd;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xdc;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x32:
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xf3;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xf4;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xf5;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xf6;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xf7;
    FUN_00483ba7();
    *(undefined1 *)(unaff_EBP + -4) = 0xf8;
    iVar3 = FUN_00402605();
    *(int *)(unaff_EBP + -0x38) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xf9;
    if (iVar3 != 0) {
      iStack_3a0 = 0;
      puStack_3a4 = (undefined1 *)0x839477;
      FUN_006a6708();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf8;
    iStack_3a0 = 0x839489;
    FUN_0083dbbd();
    *(undefined1 *)(unaff_EBP + -4) = 0xfa;
    FUN_0083dbef();
    iVar3 = FUN_004bc6a2();
    if (iVar3 == 1) {
      FUN_0083da59();
      iVar3 = FUN_0059d237();
      if (iVar3 != 0) {
        iStack_3a0 = unaff_EBP + 0x10;
        puStack_3a4 = (undefined1 *)(unaff_EBP + -0x14);
        pcStack_3a8 = (char *)(unaff_EBP + -0x10);
        iStack_3ac = unaff_EBP + -0x30;
        ppcStack_3b0 = (char **)0x8394d8;
        FUN_0083dbef();
        ppcStack_3b0 = (char **)0x8394df;
        FUN_006a73a3();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x8394f0;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x8394f6;
        FUN_00471777();
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x83950f;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x839515;
        FUN_00471777();
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x83952e;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x839534;
        FUN_00471777();
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x83954d;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x839553;
        FUN_00471777();
        FUN_004150c0();
        iStack_3a0 = 1;
        puStack_3a4 = (undefined1 *)0x400;
        pcStack_3a8 = (char *)0x83956c;
        iStack_3a0 = FUN_00415015();
        puStack_3a4 = (undefined1 *)0x839572;
        FUN_00471777();
        FUN_004150c0();
        iVar3 = FUN_0083d267();
        if (iVar3 == 0) {
          iStack_3a0 = 0x8395da;
          FUN_0083d279();
          *(undefined1 *)(unaff_EBP + -4) = 0xfc;
          iStack_3a0 = 0x8395f0;
          FUN_0045e02d();
          *(undefined1 *)(unaff_EBP + -4) = 0xfd;
          iStack_3a0 = 0x839604;
          FUN_0083d279();
          *(undefined1 *)(unaff_EBP + -4) = 0xfe;
          iStack_3a0 = 0x83961a;
          FUN_0045e02d();
          *(undefined1 *)(unaff_EBP + -4) = 0xff;
          iStack_3a0 = 0x83962e;
          FUN_0083d279();
          *(undefined4 *)(unaff_EBP + -4) = 0x100;
          iStack_3a0 = 0x839647;
          FUN_0045e02d();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          iStack_3a0 = 0x83965b;
          FUN_0083d279();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_3a0 = 0x83966e;
          FUN_0045e02d();
          *(undefined1 *)(unaff_EBP + -4) = 10;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 9;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 6;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_00414ebb();
          iStack_3a0 = 1;
          puStack_3a4 = (undefined1 *)0x400;
          pcStack_3a8 = (char *)0x8396e3;
          iStack_3a0 = FUN_00415015();
          puStack_3a4 = (undefined1 *)0x8396e9;
          iVar3 = FUN_00471777();
          FUN_004150c0();
          iVar9 = FUN_00449713();
          if ((iVar9 == 0) || (iVar3 != 0)) {
            FUN_004e21db();
            FUN_0083dbef();
            FUN_006a7623();
            FUN_00457cda();
            *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
            iStack_3a0 = 0x8397c5;
            FUN_00450368();
            FUN_00459cb5();
            *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
            iStack_3a0 = 0x8397dc;
            FUN_00450368();
            FUN_00459cb5();
            *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
            iStack_3a0 = 0x8397f3;
            FUN_00450368();
            FUN_00459cb5();
            *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
            iStack_3a0 = 0x83980a;
            FUN_00450368();
            FUN_00459cb5();
            *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
            iStack_3a0 = 0x839821;
            FUN_00450368();
            FUN_00459cb5();
            *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffc68;
            iStack_3a0 = 0x839838;
            FUN_00450368();
            FUN_00459cb5();
            FUN_0083dbf3();
            *(undefined4 *)(unaff_EBP + -4) = 0xfa;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0xf8;
            thunk_FUN_0083e2f7();
            *(undefined1 *)(unaff_EBP + -4) = 0xf7;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0xf6;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0xf5;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0xf4;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0xf3;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0;
            goto LAB_008398a6;
          }
          iStack_3a0 = 0;
          puStack_3a4 = (undefined1 *)0x0;
          ppcStack_3b0 = &pcStack_3a8;
          *(char ***)(unaff_EBP + -0x48) = &pcStack_3a8;
          iStack_3ac = 0x11d;
          pcStack_3a8 = extraout_ECX_25;
          FUN_00679d22();
          iStack_3ac = 0x83972f;
          FUN_007db3ad();
          *(undefined4 *)(unaff_EBP + -4) = 0xfa;
        }
        else {
          iStack_3a0 = 0x83959e;
          FUN_00679d22();
          iStack_3a0 = 0;
          puStack_3a4 = (undefined1 *)0x0;
          iStack_3ac = unaff_EBP + -0x48;
          *(char ***)(unaff_EBP + -0x50) = &pcStack_3a8;
          *(undefined1 *)(unaff_EBP + -4) = 0xfb;
          ppcStack_3b0 = (char **)0x8395b5;
          pcStack_3a8 = extraout_ECX_24;
          FUN_00450368();
          iStack_3ac = 0x8395ba;
          FUN_007db3ad();
          *(undefined1 *)(unaff_EBP + -4) = 0xfa;
        }
        FUN_00414ebb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf8;
    thunk_FUN_0083e2f7();
    *(undefined1 *)(unaff_EBP + -4) = 0xf7;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xf6;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xf5;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xf4;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xf3;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x33:
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_007e0f45();
    }
    uVar6 = -(uint)(iVar3 != 0) & iVar3 + 8U;
    *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar6 != 0) & uVar6 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0083e142();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    iVar3 = FUN_004bc6a2();
    if (iVar3 == 1) {
      iVar3 = FUN_004029b9();
      *(int *)(unaff_EBP + 8) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_007e0f45();
      }
      uVar6 = -(uint)(iVar3 != 0) & iVar3 + 8U;
      *(uint *)(unaff_EBP + -0x38) = -(uint)(uVar6 != 0) & uVar6 - 8;
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      FUN_0083e142();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iVar3 = FUN_004bc6a2();
      if (iVar3 == 1) {
        FUN_00457cda();
      }
      else {
        *(undefined4 *)(unaff_EBP + 0xc) = 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      FUN_0083e15f();
    }
    else {
      *(undefined4 *)(unaff_EBP + 0xc) = 1;
    }
    iVar3 = *(int *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    goto LAB_008366f4;
  case 0x34:
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_007e0f45();
    }
    uVar6 = -(uint)(iVar3 != 0) & iVar3 + 8U;
    *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar6 != 0) & uVar6 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0083e142();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    iVar3 = FUN_004bc6a2();
    if (iVar3 == 1) {
      iVar3 = FUN_004029b9();
      *(int *)(unaff_EBP + 8) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_007e0f45();
      }
      uVar6 = -(uint)(iVar3 != 0) & iVar3 + 8U;
      *(uint *)(unaff_EBP + -0x38) = -(uint)(uVar6 != 0) & uVar6 - 8;
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      FUN_0083e142();
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      iVar3 = FUN_004bc6a2();
      if (iVar3 == 1) {
        FUN_00457cda();
      }
      else {
        *(undefined4 *)(unaff_EBP + 0xc) = 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      FUN_0083e15f();
    }
    else {
      *(undefined4 *)(unaff_EBP + 0xc) = 1;
    }
    iVar3 = *(int *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_008366f4:
    if (iVar3 == 0) {
      FUN_0083e15f();
      goto switchD_00835ced_caseD_1e;
    }
    FUN_0083e15f();
LAB_00837373:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
    goto LAB_00839974;
  }
  FUN_00414ebb();
switchD_00835ced_caseD_1b:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00457cd2();
LAB_00839974:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


