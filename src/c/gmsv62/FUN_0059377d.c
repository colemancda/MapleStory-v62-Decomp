/* FUN_0059377d - 0x0059377d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0059377d(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(unaff_EBP + 0xc) + -4);
    }
    if (iVar2 <= iVar1) break;
    iVar1 = FUN_004538dc(*(undefined4 *)(unaff_EBP + 8),iVar1,0);
    if (iVar1 < 0) break;
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 1;
  } while (-1 < iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


