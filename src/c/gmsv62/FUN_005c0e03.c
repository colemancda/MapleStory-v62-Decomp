/* FUN_005c0e03 - 0x005c0e03 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c0e03(void)

{
  char cVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  int iVar3;
  
  FUN_00879bb8();
  cVar1 = FUN_0042452b();
  iVar3 = (int)cVar1;
  if (extraout_ECX[iVar3 * 2 + 0x36] == 0) {
    if (iVar3 == 0) {
      iVar2 = (**(code **)(*extraout_ECX + 0x5c))();
      if (iVar2 != 0) goto LAB_005c0e53;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0x21000003;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + 8,&DAT_00903698);
  }
LAB_005c0e53:
  if (extraout_ECX[0x33] == 0) {
    if (extraout_ECX[iVar3 * 2 + 0x36] != 0) {
      FUN_00449941(0);
      extraout_ECX[iVar3 * 2 + 0x36] = 0;
    }
    if (extraout_ECX[iVar3 * 2 + 0x4f] != 0) {
      FUN_004b8bd2(0);
      extraout_ECX[iVar3 * 2 + 0x4f] = 0;
    }
    extraout_ECX[0x32] = extraout_ECX[0x32] + -1;
  }
  (**(code **)(*extraout_ECX + 0x4c))(iVar3,*(undefined4 *)(unaff_EBP + 8));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


