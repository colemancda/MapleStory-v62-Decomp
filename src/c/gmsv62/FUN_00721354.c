/* FUN_00721354 - 0x00721354 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


code * FUN_00721354(void)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  iVar2 = FUN_00455c59(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar2 + 4);
  pcVar3 = (code *)FUN_0045e4a2();
  if (*(int *)(unaff_EBP + 8) == 0x201) {
    *(int *)(unaff_EBP + -0x20) = extraout_ECX + -4;
    pcVar3 = (code *)FUN_007229aa(*(undefined4 *)(unaff_EBP + 0x10),
                                  *(undefined4 *)(unaff_EBP + 0x14),1);
    if (-1 < (int)pcVar3) {
      iVar2 = FUN_00722abd(0);
      piVar6 = *(int **)(*(int *)(iVar2 + 8) + 4 + (int)pcVar3 * 8);
      *(int **)(unaff_EBP + -0x14) = piVar6;
      iVar2 = *piVar6;
      iVar4 = iVar2 / 1000;
      pcVar3 = (code *)(iVar4 / 10);
      if (iVar4 % 10 != 0) {
        pcVar3 = (code *)FUN_00650dae(*(undefined4 *)(unaff_EBP + -0x1c),iVar2,unaff_EBP + -0x14);
        if (0 < (int)pcVar3) {
          FUN_00403191(&DAT_00980690);
          *(undefined4 *)(unaff_EBP + -4) = 0;
          FUN_004031b7(0,3);
          bVar8 = DAT_0097c1ac == 0;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (bVar8) {
            FUN_00878dfb(0x80004003);
          }
          FUN_0042a39f(unaff_EBP + 8,0,0,0,0,0,unaff_EBP + -0x34,unaff_EBP + -0x44);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x44);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x90);
          FUN_004125f3();
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 6;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_00878dfb(0x80004003);
          }
          FUN_004250ac(unaff_EBP + -0x84,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x44,
                       unaff_EBP + -0x34,unaff_EBP + -0x54,unaff_EBP + -100,unaff_EBP + -0x74);
          iVar2 = FUN_00402bc3(unaff_EBP + -0x84);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          *(undefined1 *)(unaff_EBP + -4) = 9;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x44);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x54);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          *(undefined1 *)(unaff_EBP + -4) = 6;
          iVar2 = FUN_00402bc3(unaff_EBP + -100);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x74);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar6 = *(int **)(unaff_EBP + 8);
          iVar2 = (**(code **)(*piVar6 + 0xe0))(piVar6,0x80ffffff);
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,piVar6,&DAT_00963df8);
          }
          puVar5 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x1c);
          FUN_0040ee87(*puVar5,1);
          piVar6 = *(int **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          if (piVar6 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar6 = *(int **)(unaff_EBP + 8);
          }
          iVar2 = *piVar6;
          *(int **)(unaff_EBP + -0x20) = piVar6;
          iVar2 = (**(code **)(iVar2 + 100))
                            (piVar6,*(undefined4 *)(unaff_EBP + -0x74),
                             *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c),
                             *(undefined4 *)(unaff_EBP + -0x68));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x74);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_00412600();
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            FUN_00878dfb(0x80004003);
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              FUN_00878dfb(0x80004003);
            }
          }
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar6 = *(int **)(unaff_EBP + 8);
          iVar2 = FUN_0040eed0();
          *(int *)(unaff_EBP + 0x14) = (*(int *)(unaff_EBP + 0x14) - iVar2) + 0x10;
          iVar2 = FUN_0040eea9();
          iVar2 = (**(code **)(*piVar6 + 0x90))
                            (piVar6,(*(int *)(unaff_EBP + 0x10) - iVar2) + -0x10,
                             *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + -0x74),
                             *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c),
                             *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -100),
                             *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),
                             *(undefined4 *)(unaff_EBP + -0x58));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,piVar6,&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x74);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iVar2 = FUN_00402bc3(unaff_EBP + -100);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          puVar5 = (undefined4 *)FUN_004029b9(0x24);
          *(undefined4 **)(unaff_EBP + 0x14) = puVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          if (puVar5 == (undefined4 *)0x0) {
            uVar7 = *(uint *)(unaff_EBP + -0x18);
            puVar5 = (undefined4 *)0x0;
          }
          else {
            uVar1 = **(undefined4 **)(unaff_EBP + -0x14);
            FUN_00611607(*(undefined4 *)(unaff_EBP + 8));
            uVar7 = *(uint *)(unaff_EBP + -0x18);
            puVar5[5] = 0;
            puVar5[6] = 0xffffffff;
            puVar5[7] = 0xffffffff;
            puVar5[4] = uVar1;
            puVar5[8] = -(uint)(uVar7 != 4) & uVar7;
            *puVar5 = &PTR_FUN_008efcdc;
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_0081820c(-(uint)(uVar7 != 4) & uVar7,puVar5);
          puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + 0x14,0x73b);
          uVar1 = *puVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          FUN_007d3cdd(uVar1);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          if (*(int *)(unaff_EBP + 0x14) != 0) {
            FUN_00403384(*(int *)(unaff_EBP + 0x14) + -0xc);
          }
          FUN_004125e6();
          pcVar3 = (code *)FUN_00412600();
        }
      }
    }
  }
  else if (*(int *)(unaff_EBP + 8) == 0x203) {
    iVar2 = FUN_007229aa(*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),0);
    pcVar3 = DAT_00978358;
    if ((DAT_00978358 != (code *)0x0) && (*(code **)(unaff_EBP + 0x14) = DAT_00978358, -1 < iVar2))
    {
      pcVar3 = (code *)FUN_004bed04();
      if ((pcVar3 == (code *)0x0) && (DAT_00979178 == 0)) {
        iVar4 = FUN_00722abd(0);
        pcVar3 = (code *)**(int **)(*(int *)(iVar4 + 8) + 4 + iVar2 * 8);
        if ((int)pcVar3 < 0x236a6a) {
          if (((pcVar3 == (code *)0x236a69) || (pcVar3 == (code *)0x111ae9)) ||
             ((pcVar3 == (code *)0x12a189 ||
              ((pcVar3 == (code *)0x142829 || (pcVar3 == (code *)0x205d29)))))) goto LAB_00721879;
          bVar8 = pcVar3 == (code *)0x21e3c9;
        }
        else {
          if ((((pcVar3 == (code *)0x2f9f6c) || (pcVar3 == (code *)0x312609)) ||
              (pcVar3 == (code *)0x4dd5cc)) || (pcVar3 == ptr_004f5c6a)) goto LAB_00721879;
          bVar8 = pcVar3 == (code *)0x4faa8c;
        }
        if (!bVar8) {
          pcVar3 = (code *)FUN_007b8688(pcVar3);
        }
      }
    }
  }
LAB_00721879:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return pcVar3;
}


