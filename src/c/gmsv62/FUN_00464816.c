/* FUN_00464816 - 0x00464816 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00464816(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((0 < iVar2) && (iVar2 < 6)) {
    if (iVar2 == 1) {
      iVar2 = *(int *)(unaff_EBP + 0xc);
      if ((iVar2 != 0) && ((-0x31 < iVar2 || (iVar2 < -100)))) {
        if (*(int *)(extraout_ECX + 999) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(extraout_ECX + 999) + -4);
        }
        if ((iVar2 <= iVar3 + -1) && (-0x95 < iVar2)) {
LAB_004648d9:
          FUN_004653ef(unaff_EBP + 0x10);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + 0x14) != 0) {
            FUN_00449913(0);
          }
          uVar1 = 1;
          goto LAB_00464909;
        }
      }
    }
    else if (0 < *(int *)(unaff_EBP + 0xc)) {
      iVar2 = *(int *)(extraout_ECX + 0x3e3 + iVar2 * 4);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + -4);
      }
      if (*(int *)(unaff_EBP + 0xc) <= iVar2 + -1) goto LAB_004648d9;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    FUN_00449913(0);
  }
  uVar1 = 0;
LAB_00464909:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


