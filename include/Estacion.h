#ifndef ESTACION_H
#define ESTACION_H


class Estacion
{
    public:
        Estacion(){};
        void mostrar();
        bool grabarEnDisco();
        bool leerDeDisco(int pos);
        void setID(int );
        void setTotalLitros(int );
        void setAnio(int anio);
        void setId(int id);
        void setLITROS(int litros);
        void mostrar4();
        int getAnio();
        int getLitros();
        int getID();

    protected:

    private:
        int ID,totalLitros,anio;
};

#endif // ESTACION_H
