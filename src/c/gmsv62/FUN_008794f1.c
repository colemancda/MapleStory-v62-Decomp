/* FUN_008794f1 - 0x008794f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


BSTR FUN_008794f1(LPCSTR param_1)

{
  BSTR pOVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  
  if (param_1 == (LPCSTR)0x0) {
    pOVar1 = (BSTR)0x0;
  }
  else {
    iVar2 = lstrlenA(param_1);
    FUN_0087a1b0();
    iVar2 = MultiByteToWideChar(0,0,param_1,-1,(LPWSTR)&stack0xfffffff4,iVar2 + 1);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0) {
        uVar4 = 0;
      }
      else {
        DVar3 = GetLastError();
        uVar4 = DVar3 & 0xffff | 0x80070000;
      }
      FUN_00878dfb(uVar4);
    }
    pOVar1 = SysAllocString((OLECHAR *)&stack0xfffffff4);
  }
  return pOVar1;
}


