/* FUN_005c0d6a - 0x005c0d6a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c0d6a(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int *extraout_ECX;
  int unaff_EBP;
  int iVar4;
  
  FUN_00879bb8();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  cVar2 = FUN_0042452b();
  iVar4 = (int)cVar2;
  if (extraout_ECX[iVar4 * 2 + 0x36] != 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0x21000003;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + 8,&DAT_00903698);
  }
  FUN_005c1321(iVar4,uVar1);
  uVar3 = FUN_0045cdbc(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00414f8b(uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  extraout_ECX[0x32] = extraout_ECX[0x32] + 1;
  (**(code **)(*extraout_ECX + 0x44))(iVar4,uVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


