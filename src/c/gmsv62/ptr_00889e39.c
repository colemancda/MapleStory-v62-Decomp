/* ptr_00889e39 - 0x00889e39 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00889e39(void)

{
  int iVar1;
  int iVar2;
  code *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  if (DAT_00970418 < DAT_0097041c + DAT_00970418) {
    iVar1 = DAT_00970418 * 0xc;
    iVar2 = DAT_00970418;
    do {
      iVar1 = iVar1 + 0xc;
      *(undefined4 *)(*(int *)(unaff_ESI + 0x50) + -4 + iVar1) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_0097041c + DAT_00970418);
  }
  if (*(int *)(unaff_EBP + -4) != 0) {
    FUN_0087da4d(1);
  }
  if (*(int *)(unaff_EBP + 8) == 8) {
    (*unaff_EBX)(8,*(undefined4 *)(unaff_ESI + 0x58));
  }
  else {
    (*unaff_EBX)(*(undefined4 *)(unaff_EBP + 8));
    if ((*(int *)(unaff_EBP + 8) != 0xb) && (*(int *)(unaff_EBP + 8) != 4)) {
      return 0;
    }
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_ESI + 0x54) = *(undefined4 *)(unaff_EBP + -8);
  if (iVar2 == 8) {
    *(undefined4 *)(unaff_ESI + 0x58) = *(undefined4 *)(unaff_EBP + -0xc);
  }
  return 0;
}


