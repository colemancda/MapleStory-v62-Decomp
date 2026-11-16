/* FUN_5000e31f - 0x5000e31f in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000e31f(void)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int unaff_EBP;
  short *psVar6;
  
  FUN_50012d80();
  piVar2 = (int *)FUN_5000ec39(*(void **)(unaff_EBP + 8),(undefined4 *)(unaff_EBP + -0x14));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_5000e7e9((void *)(unaff_EBP + -0x10),piVar2);
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  Ordinal_8(unaff_EBP + -0x38);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  psVar6 = *(short **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  do {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_50012c97(0x80004003);
    }
    iVar3 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0xc))
                      (*(int **)(unaff_EBP + -0x10),1,unaff_EBP + -0x38,unaff_EBP + -0x18);
    if (iVar3 != 0) {
      psVar6[0] = 0;
      psVar6[1] = 0;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar3 = FUN_5000630c((short *)(unaff_EBP + -0x38));
      if (iVar3 < 0) {
        FUN_50012c97(iVar3);
      }
      piVar2 = *(int **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    puVar4 = (ushort *)FUN_500070ab((void *)(unaff_EBP + -0x38));
    Ordinal_8(unaff_EBP + -0x28);
    iVar3 = **(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar3 = (**(code **)(iVar3 + 0x14))(*(int **)(unaff_EBP + 8),puVar4,unaff_EBP + -0x28);
    if ((-1 < iVar3) && (iVar3 = FUN_5000eada(), iVar3 != 0)) {
      uVar1 = *puVar4;
      if (uVar1 < 0x4a) {
        if (uVar1 == 0x49) {
          *psVar6 = 0x804;
        }
        else if (uVar1 == 0x42) {
          *psVar6 = 0x803;
        }
        else if (uVar1 == 0x43) {
          *psVar6 = 0x805;
        }
        else if (uVar1 == 0x47) {
          *psVar6 = 0x802;
        }
        else {
          if (uVar1 != 0x48) goto LAB_5000e4de;
          *psVar6 = 1;
        }
      }
      else if (uVar1 == 0x52) {
        *psVar6 = 0x801;
      }
      else if (uVar1 == 0x53) {
        *psVar6 = 2;
      }
      else {
        if (uVar1 != 0x56) goto LAB_5000e4de;
        *psVar6 = 3;
      }
      if (*psVar6 == 1) {
        if (iVar3 < 0xb5) {
          if (iVar3 < -0xb4) {
            iVar3 = 0xb4 - (0xb4 - iVar3) % 0x168;
          }
        }
        else {
          iVar3 = (iVar3 + 0xb4) % 0x168 + -0xb4;
        }
        iVar3 = iVar3 + 0xb4;
        iVar5 = 0x169;
LAB_5000e4c9:
        psVar6[1] = (short)((iVar3 << 8) / iVar5) + -0x80;
      }
      else {
        if (*psVar6 != 0x804) {
          if (iVar3 < 0x65) {
            if (iVar3 < -100) {
              iVar3 = -100;
            }
          }
          else {
            iVar3 = 100;
          }
          iVar3 = iVar3 + 100;
          iVar5 = 0xc9;
          goto LAB_5000e4c9;
        }
        if (iVar3 < 0x65) {
          if (iVar3 < -100) {
            iVar3 = -100;
          }
        }
        else {
          iVar3 = 100;
        }
        psVar6[1] = (short)iVar3;
      }
      if (psVar6[1] != 0) {
        psVar6 = psVar6 + 2;
      }
    }
LAB_5000e4de:
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar3 = FUN_5000630c((short *)(unaff_EBP + -0x28));
    if (iVar3 < 0) {
      FUN_50012c97(iVar3);
    }
    iVar3 = FUN_5000630c((short *)(unaff_EBP + -0x38));
    if (iVar3 < 0) {
      FUN_50012c97(iVar3);
    }
  } while( true );
}


