/* FUN_008800c0 - 0x008800c0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_008800c0(int param_1)

{
  int iVar1;
  
  DAT_00982248 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_00982248 != (HANDLE)0x0) {
    DAT_0098224c = FUN_0087ff78();
    if (DAT_0098224c == 3) {
      iVar1 = FUN_00880297(0x3f8);
    }
    else {
      if (DAT_0098224c != 2) {
        return 1;
      }
      iVar1 = FUN_00881200();
    }
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_00982248);
  }
  return 0;
}


