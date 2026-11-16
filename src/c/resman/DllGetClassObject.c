/* DllGetClassObject - 0x510010a7 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x10a7  2  DllGetClassObject */
  piVar2 = (int *)&DAT_5100720c;
  iVar1 = wcscmp((wchar_t *)rclsid,u_ResMan_510080a8);
  if (iVar1 == 0) {
    piVar2 = (int *)&DAT_51008088;
  }
  piVar2 = FUN_51002116((int *)&DAT_510092d0,piVar2,riid,(int *)ppv);
  return (HRESULT)piVar2;
}


