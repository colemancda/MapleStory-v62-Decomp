/* FUN_50004f6a - 0x50004f6a in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall FUN_50004f6a(void *this,int *param_1)

{
  uint uVar1;
  LPCWSTR lpWideCharStr;
  int iVar2;
  undefined1 local_14 [16];
  
  memset(param_1,0,0x3c);
  if (*(undefined4 **)((int)this + 0x10) == (undefined4 *)0x0) {
    lpWideCharStr = (LPCWSTR)0x0;
  }
  else {
    lpWideCharStr = (LPCWSTR)**(undefined4 **)((int)this + 0x10);
  }
  iVar2 = WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)(param_1 + 7),0x20,(LPCSTR)0x0,(LPBOOL)0x0
                             );
  if (iVar2 == 0) {
    FUN_50007006(local_14,0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_50015eb8);
  }
  iVar2 = -*(int *)((int)this + 0x14);
  *param_1 = iVar2;
  if ((iVar2 < 0) && (-0x101 < iVar2)) {
    *(undefined1 *)((int)param_1 + 0x17) = 1;
    uVar1 = *(uint *)((int)this + 0x1c);
    if ((uVar1 & 1) != 0) {
      param_1[4] = 700;
    }
    if ((uVar1 & 2) != 0) {
      *(undefined1 *)(param_1 + 5) = 1;
    }
    if ((uVar1 & 4) != 0) {
      *(undefined1 *)((int)param_1 + 0x15) = 1;
    }
    if ((uVar1 & 8) != 0) {
      *(undefined1 *)((int)param_1 + 0x1a) = 3;
    }
    if ((uVar1 & 0x10) != 0) {
      *(undefined1 *)((int)param_1 + 0x1a) = 4;
    }
    return;
  }
  FUN_50007006(local_14,0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&DAT_50015eb8);
}


