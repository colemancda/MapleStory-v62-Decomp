/* ptr_00581d61 - 0x00581d61 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00581d61(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((6 < param_1) && (param_1 < 0x2b)) {
    iVar2 = 0;
    iVar1 = 0x58;
    do {
      if ((iVar1 <= param_2) && (param_2 <= iVar1 + 0x11)) {
        FUN_00581e26(iVar2);
        return 0;
      }
      iVar1 = iVar1 + 0x14;
      iVar2 = iVar2 + 1;
    } while (iVar1 < 0xa8);
  }
  FUN_0074d6fb();
  return 0;
}


