/* FUN_0084df3f - 0x0084df3f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084df3f(undefined4 param_1)

{
  byte bVar1;
  
  bVar1 = FUN_0042452b();
  if (bVar1 == 9) {
LAB_0084df6d:
    FUN_00810af5(bVar1,param_1);
  }
  else {
    if (bVar1 != 10) {
      if (bVar1 < 0xb) {
        return;
      }
      if (bVar1 < 0xf) goto LAB_0084df6d;
      if (0x10 < bVar1) {
        return;
      }
    }
    FUN_00812459(bVar1,param_1);
  }
  return;
}


