/* FUN_005dee4d - 0x005dee4d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_005dee4d(void)

{
  int iVar1;
  
  iVar1 = FUN_005dee77();
  if (iVar1 != 0) {
    iVar1 = FUN_005df4eb();
    if (iVar1 != 0) {
      iVar1 = FUN_005dfe04();
      return iVar1 != 0;
    }
  }
  return false;
}


