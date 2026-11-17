/* FUN_007f50dd - 0x007f50dd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007f50dd(uint param_1,void *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    iVar2 = _memcmp(param_2,&DAT_008f3e54,0x10);
    if ((((iVar2 != 0) && (iVar2 = _memcmp(param_2,&DAT_0096c3d0,0x10), iVar2 != 0)) &&
        (iVar2 = _memcmp(param_2,&DAT_00963d08,0x10), iVar2 != 0)) &&
       (iVar2 = _memcmp(param_2,&DAT_00963de8,0x10), iVar2 != 0)) {
      *param_3 = 0;
      return 0x80004002;
    }
    piVar3 = (int *)(-(uint)(param_1 != 0xc) & param_1);
    *param_3 = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    uVar1 = 0;
  }
  return uVar1;
}


