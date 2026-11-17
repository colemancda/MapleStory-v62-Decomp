/* FUN_007f517a - 0x007f517a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_007f517a(int param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_0097b3c0)(param_1 + 4);
  if ((iVar1 == 0) && ((undefined4 *)(param_1 + -0xc) != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)(param_1 + -0xc))(1);
  }
  return iVar1;
}


