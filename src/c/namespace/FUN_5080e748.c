/* FUN_5080e748 - 0x5080e748 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined8 __cdecl FUN_5080e748(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_38 [28];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [16];
  
  uStack_5c = *(undefined4 *)(param_1 + 0x2c);
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = 0xffffffff;
  uStack_60 = 0;
  uStack_64 = 0;
  (*DAT_5081e734)();
  FUN_5080e250();
  (*DAT_5081e734)(0,0,*(undefined4 *)(param_1 + 0x2c),0xffffffff,&uStack_64,0x3fffffff,0,0);
  iVar1 = (*DAT_5081e6b0)(&uStack_64,0,local_38);
  if (iVar1 == 0) {
    uVar2 = (*DAT_5081e704)();
    if ((-1 < (int)uVar2) && (0 < (int)uVar2)) {
      uVar2 = uVar2 & 0xffff | 0x80070000;
    }
    FUN_5080450d(local_14,uVar2,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_50819008);
  }
  return CONCAT44(local_1c,local_18);
}


