/* FUN_00828e4d - 0x00828e4d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00828e4d(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_00879bb8();
  iVar1 = DAT_0097926c;
  if (DAT_0097926c == 0) {
    uVar2 = extraout_ECX;
    iVar1 = FUN_004029b9(0x19c);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0062a4c4(uVar2);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


