# AulaCPPv1
![unreal engine](https://img.shields.io/badge/-Unreal%20Engine-313131?style=for-the-badge&logo=unreal-engine&logoColor=white)

Version: 4.27.1
Visual Studio: 2019


Projeto:  Aula de Unreal Engine com lógica de programação em C++.


## Preparando o projeto

1. Clonando o projeto usando PowerShell.
```
git clone https://github.com/myerco/AulaCPPv1.git
```
2. Importe os seguintes Assets.
- ThirdPerson
- StarterContent
- MobileStarterContent
- AnimStarterPack
3. Crie as pasta `ExampleContent`, `ExternalAssets` em `Content`. Estas pastas serão ignoradas na transmissão para o servidor.
4. Mova os pacotes para a pasta criada anteriormente.
```bash
|-- Content
		|-- ProjectClassRoom
		|-- ExampleContent
		|		|-- ThirdPerson
		|		|-- StarterContent
		|		|-- MobileStarterContent
		|		|-- AnimStarterPack
		|-- ExternalAssets
```
5. Configure o [git-lfs](https://git-lfs.github.com/) no diretório do projeto.
6. Para bibliotecas de Assets que não podem ser carregas no projeto por causa do tamanho dos arquivos, como por exemplo : imagens, arquivos de softwares 3D e arquivos de som,  utilize a pasta `ExternalAssets`.

> Utilize o acesso a loja/Store para importar AnimStarterPack


## Referências
- [Death VIP](http://cafegeek.eti.br/trabalhos/modelo_gdd_death_vip.html)
