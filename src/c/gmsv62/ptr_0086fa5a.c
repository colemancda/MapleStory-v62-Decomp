/* ptr_0086fa5a - 0x0086fa5a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

undefined4 ptr_0086fa5a(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  if (DAT_0097fc64 != 0) {
    *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined4 *)(iVar1 + -8) = *(undefined4 *)(unaff_EBP + -0xe8);
    *(undefined4 *)(iVar1 + -0xc) = 0x96eaf0;
    *(undefined4 *)(iVar1 + -0x10) = 0x86fa7b;
    uVar2 = FUN_00875080();
    *(undefined4 *)(iVar1 + -0xc) = uVar2;
    *(int *)(iVar1 + -0x10) = DAT_0097fc64 + 0x24;
    *(undefined4 *)(iVar1 + -0x14) = 0x86fa8d;
    FUN_0086cff0();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x20);
}


