/* FUN_004714b2 - 0x004714b2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004714b2(byte *param_1,byte *param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    bVar1 = *param_1;
    if ((0x1f < bVar1) || ((param_4 == 0 && ((bVar1 == 0xd || (bVar1 == 10)))))) {
      iVar2 = FUN_004713ea(param_3,bVar1);
      if (iVar2 == 0) {
        *param_2 = *param_1;
        param_2 = param_2 + 1;
      }
    }
  }
  *param_2 = 0;
  return;
}


