/* FUN_00885d3b - 0x00885d3b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00885d3b(char *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (DAT_0098201c == 0) {
    return 0;
  }
  FUN_0087d9ec(0x19);
  uVar2 = 0xffffffff;
  do {
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      uVar2 = 0xffffffff;
      break;
    }
    param_1 = param_1 + 1;
    uVar2 = FUN_00889b12(cVar1,uVar2);
    bVar3 = param_2 != 0;
    param_2 = param_2 + -1;
  } while (bVar3);
  FUN_0087da4d(0x19);
  return uVar2;
}


