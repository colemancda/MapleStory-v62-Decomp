/* FUN_0080c626 - 0x0080c626 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0080c626(uint param_1,void *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _memcmp(param_2,&DAT_008f37e4,0x10);
  uVar2 = param_1;
  if ((iVar1 != 0) && (iVar1 = _memcmp(param_2,&DAT_008f3e54,0x10), iVar1 != 0)) {
    iVar1 = _memcmp(param_2,&DAT_008f3754,0x10);
    if ((iVar1 == 0) || (iVar1 = _memcmp(param_2,&DAT_008f37c4,0x10), iVar1 == 0)) {
      uVar2 = param_1 + 4;
    }
    else {
      iVar1 = _memcmp(param_2,&LAB_008f3cc4,0x10);
      if (iVar1 == 0) {
        uVar2 = param_1 + 8;
      }
      else {
        iVar1 = _memcmp(param_2,&DAT_008f3c94,0x10);
        if (iVar1 == 0) {
          uVar2 = param_1 + 0xc;
        }
        else {
          iVar1 = _memcmp(param_2,&DAT_008f39b4,0x10);
          if (iVar1 != 0) {
            *param_3 = 0;
            return 0x80004002;
          }
          uVar2 = param_1 + 0x10;
        }
      }
    }
  }
  *param_3 = -(uint)(param_1 != 0x578) & uVar2;
  return 0;
}


