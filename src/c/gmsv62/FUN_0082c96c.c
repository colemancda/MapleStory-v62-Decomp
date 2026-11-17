/* FUN_0082c96c - 0x0082c96c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0082c96c(void)

{
  short sVar1;
  HWND hWnd;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int unaff_EBP;
  bool bVar6;
  
  FUN_00879bb8();
  bVar6 = DAT_00973cd8 == 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc8;
  if ((bVar6) || (iVar2 = (*DAT_0097b60c)(), iVar2 != 0)) goto LAB_0082cb23;
  bVar6 = DAT_00978364 != 0;
  *(int *)(unaff_EBP + -0x18) = DAT_00973cd8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if ((bVar6) &&
     (iVar2 = FUN_0081a94a(unaff_EBP + 0xc,unaff_EBP + 0x10,unaff_EBP + 0x14,unaff_EBP + -0x14),
     iVar2 != 0)) {
    uVar5 = *(undefined4 *)(unaff_EBP + -0x14);
    goto LAB_0082cb25;
  }
  uVar4 = *(uint *)(unaff_EBP + 0xc);
  if (0x20 < uVar4) {
    if (uVar4 == 0x104) {
      if (*(int *)(unaff_EBP + 0x10) == 0x73) goto LAB_0082cb23;
    }
    else if (uVar4 == 0x112) {
      if (*(int *)(unaff_EBP + 0x10) == 0xf100) goto LAB_0082cb23;
    }
    else if (((uVar4 == 0x401) && (DAT_009784c4 != 0)) &&
            (*(int *)(DAT_009784c4 + 8) == *(int *)(unaff_EBP + 0x10))) {
      *(int *)(unaff_EBP + -0x24) = DAT_009796d4;
      FUN_00475ac6();
      uVar4 = *(uint *)(unaff_EBP + 0x14) >> 0x10;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (uVar4 == 0) {
        sVar1 = *(short *)(unaff_EBP + 0x14);
        if (sVar1 == 1) {
          FUN_00474f28();
        }
        else if (sVar1 == 2) {
          FUN_004752aa();
        }
        else if (sVar1 == 0x10) {
          FUN_00473da9(1);
        }
        else if (sVar1 == 0x20) {
          FUN_00475120();
        }
      }
      else {
        FUN_0047509a(uVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00475ae3();
    }
    goto LAB_0082cc05;
  }
  if (uVar4 == 0x20) {
    (*DAT_0097b5b4)(0);
  }
  else {
    if (uVar4 != 2) {
      if (uVar4 == 3) {
        if (DAT_00973cd4 != 0) {
          hWnd = *(HWND *)(DAT_00973cd4 + 0x10);
          GetWindowRect(*(HWND *)(unaff_EBP + 8),(LPRECT)(unaff_EBP + -0x38));
          if (*(int *)(unaff_EBP + -0x2c) - *(int *)(unaff_EBP + -0x34) < 0x259) {
            iVar2 = (*DAT_0097b544)(4);
            iVar3 = (*DAT_0097b544)(8);
            *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + iVar2 + iVar3 * 2;
          }
          SetWindowPos(hWnd,*(HWND *)(unaff_EBP + 8),*(int *)(unaff_EBP + -0x38),
                       *(int *)(unaff_EBP + -0x2c),0,0,0x11);
          goto LAB_0082cb23;
        }
      }
      else if (uVar4 == 6) {
        FUN_0082ccc4(*(short *)(unaff_EBP + 0x10) == 0);
        iVar2 = DAT_009796d4;
        if (*(short *)(unaff_EBP + 0x10) != 0) {
          if ((DAT_009796d4 == 0) ||
             (iVar3 = (**(code **)(*(int *)(DAT_009796d4 + 4) + 0x48))(&DAT_00978498), iVar3 == 0))
          {
            iVar2 = 0;
          }
          if (iVar2 != 0) {
            FUN_0045d336();
          }
          if (DAT_009784c0 != 0) {
            FUN_00526660();
          }
          if ((DAT_00978358 != 0) && (*(int *)(DAT_00978358 + 0x2454) != 0)) {
            FUN_007b0b2a();
          }
          if (DAT_00973cd4 != 0) {
            if (DAT_0097c1ac == 0) {
              FUN_00878dfb(0x80004003);
            }
            iVar2 = FUN_00527f9a();
            if (iVar2 == 0) {
              SetWindowPos(*(HWND *)(DAT_00973cd4 + 0x10),*(HWND *)(unaff_EBP + 8),0,0,0,0,0x13);
            }
          }
        }
      }
      else if (uVar4 == 0xf) {
        (*DAT_0097b608)(*(undefined4 *)(unaff_EBP + 8),0);
      }
LAB_0082cc05:
      uVar5 = (*DAT_0097b510)(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                              *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
      goto LAB_0082cb25;
    }
    (*DAT_0097b514)(0);
  }
LAB_0082cb23:
  uVar5 = 0;
LAB_0082cb25:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


