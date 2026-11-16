/* FUN_500045c5 - 0x500045c5 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __cdecl FUN_500045c5(short *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  bool bVar4;
  undefined1 local_14 [16];
  
  if ((*param_1 == 10) || (*param_1 == 0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (ushort *)FUN_500070ab(param_1);
    if (puVar2 == (ushort *)0x0) {
      FUN_50007006(local_14,0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_14,(ThrowInfo *)&DAT_50015eb8);
    }
    uVar3 = 0;
    while (*puVar2 != 0) {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
      if (uVar1 < 0x62) {
        if ((uVar1 == 0x61) || (uVar1 == 0x41)) {
          uVar3 = uVar3 | 0x10;
        }
        else {
          if (uVar1 == 0x42) goto LAB_5000465f;
          if (uVar1 == 0x49) goto LAB_5000465a;
          if (uVar1 == 0x4e) goto LAB_50004655;
          bVar4 = uVar1 == 0x55;
LAB_5000464e:
          if (!bVar4) {
            FUN_50007006(local_14,0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(local_14,(ThrowInfo *)&DAT_50015eb8);
          }
          uVar3 = uVar3 | 4;
        }
      }
      else if (uVar1 == 0x62) {
LAB_5000465f:
        uVar3 = uVar3 | 1;
      }
      else if (uVar1 == 0x69) {
LAB_5000465a:
        uVar3 = uVar3 | 2;
      }
      else {
        if (uVar1 != 0x6e) {
          bVar4 = uVar1 == 0x75;
          goto LAB_5000464e;
        }
LAB_50004655:
        uVar3 = uVar3 | 8;
      }
    }
  }
  return uVar3;
}


