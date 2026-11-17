/* FUN_0084af05 - 0x0084af05 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_0084af05(uint param_1,uint param_2)

{
  int iVar1;
  int local_c;
  int local_8;
  
  if (((((int)(((ulonglong)param_1 / 1000000) % 100) != 9) &&
       ((int)(((ulonglong)param_2 / 1000000) % 100) != 9)) && (param_1 / 10000 != 0x4e29)) &&
     (param_2 / 10000 != 0x4e29)) {
    param_1 = param_1 / 10000000;
    iVar1 = FUN_0084f267(&param_1,&local_8);
    if (iVar1 != 0) {
      param_1 = param_2 / 10000000;
      iVar1 = FUN_0084f267(&param_1,&local_c);
      if (iVar1 != 0) {
        return local_8 == local_c;
      }
    }
  }
  return false;
}


